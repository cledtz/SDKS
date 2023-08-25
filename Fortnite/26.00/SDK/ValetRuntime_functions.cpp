#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ValetRuntime.FortValetMountedGunAnimInstance
// (None)

class UClass* UFortValetMountedGunAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortValetMountedGunAnimInstance");

	return Clss;
}


// FortValetMountedGunAnimInstance ValetRuntime.Default__FortValetMountedGunAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortValetMountedGunAnimInstance* UFortValetMountedGunAnimInstance::GetDefaultObj()
{
	static class UFortValetMountedGunAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortValetMountedGunAnimInstance*>(UFortValetMountedGunAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortValetPassengerAnimInstance
// (None)

class UClass* UFortValetPassengerAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortValetPassengerAnimInstance");

	return Clss;
}


// FortValetPassengerAnimInstance ValetRuntime.Default__FortValetPassengerAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortValetPassengerAnimInstance* UFortValetPassengerAnimInstance::GetDefaultObj()
{
	static class UFortValetPassengerAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortValetPassengerAnimInstance*>(UFortValetPassengerAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortValetSedanAnimInstance
// (None)

class UClass* UFortValetSedanAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortValetSedanAnimInstance");

	return Clss;
}


// FortValetSedanAnimInstance ValetRuntime.Default__FortValetSedanAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortValetSedanAnimInstance* UFortValetSedanAnimInstance::GetDefaultObj()
{
	static class UFortValetSedanAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortValetSedanAnimInstance*>(UFortValetSedanAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.DagwoodNetworkPhysicsComponent
// (None)

class UClass* UDagwoodNetworkPhysicsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DagwoodNetworkPhysicsComponent");

	return Clss;
}


// DagwoodNetworkPhysicsComponent ValetRuntime.Default__DagwoodNetworkPhysicsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDagwoodNetworkPhysicsComponent* UDagwoodNetworkPhysicsComponent::GetDefaultObj()
{
	static class UDagwoodNetworkPhysicsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDagwoodNetworkPhysicsComponent*>(UDagwoodNetworkPhysicsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetState_GT
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FDagwoodInPersistent        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDagwoodNetworkPhysicsComponent::SetState_GT(struct FDagwoodInPersistent& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "SetState_GT");

	Params::UDagwoodNetworkPhysicsComponent_SetState_GT_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetPendingInputCmd
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFortDagwoodCmd             In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UDagwoodNetworkPhysicsComponent::SetPendingInputCmd(struct FFortDagwoodCmd& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "SetPendingInputCmd");

	Params::UDagwoodNetworkPhysicsComponent_SetPendingInputCmd_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction ValetRuntime.DagwoodNetworkPhysicsComponent.OnGeneratedLocalInputCmd__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UDagwoodNetworkPhysicsComponent::OnGeneratedLocalInputCmd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "OnGeneratedLocalInputCmd__DelegateSignature");

	Params::UDagwoodNetworkPhysicsComponent_OnGeneratedLocalInputCmd__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_PT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDagwoodState_PT            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FDagwoodState_PT UDagwoodNetworkPhysicsComponent::GetState_PT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetState_PT");

	Params::UDagwoodNetworkPhysicsComponent_GetState_PT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_GT
// (Final, Native, Public, Const)
// Parameters:
// struct FDagwoodInPersistent        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FDagwoodInPersistent UDagwoodNetworkPhysicsComponent::GetState_GT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetState_GT");

	Params::UDagwoodNetworkPhysicsComponent_GetState_GT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetPendingInputCmd
// (Final, Native, Public, Const)
// Parameters:
// struct FFortDagwoodCmd             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFortDagwoodCmd UDagwoodNetworkPhysicsComponent::GetPendingInputCmd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetPendingInputCmd");

	Params::UDagwoodNetworkPhysicsComponent_GetPendingInputCmd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValetRuntime.NetworkPhysicsManager
// (None)

class UClass* UNetworkPhysicsManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetworkPhysicsManager");

	return Clss;
}


// NetworkPhysicsManager ValetRuntime.Default__NetworkPhysicsManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetworkPhysicsManager* UNetworkPhysicsManager::GetDefaultObj()
{
	static class UNetworkPhysicsManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetworkPhysicsManager*>(UNetworkPhysicsManager::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters
// (Actor)

class UClass* UFortAthenaMutator_OverrideValetVehicleParameters::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_OverrideValetVehicleParameters");

	return Clss;
}


// FortAthenaMutator_OverrideValetVehicleParameters ValetRuntime.Default__FortAthenaMutator_OverrideValetVehicleParameters
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_OverrideValetVehicleParameters* UFortAthenaMutator_OverrideValetVehicleParameters::GetDefaultObj()
{
	static class UFortAthenaMutator_OverrideValetVehicleParameters* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_OverrideValetVehicleParameters*>(UFortAthenaMutator_OverrideValetVehicleParameters::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters.OnPlaylistLoaded
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContainerTags                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaMutator_OverrideValetVehicleParameters::OnPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContainerTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_OverrideValetVehicleParameters", "OnPlaylistLoaded");

	Params::UFortAthenaMutator_OverrideValetVehicleParameters_OnPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContainerTags = PlaylistContainerTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValetRuntime.FortCameraMode_Dagwood
// (None)

class UClass* UFortCameraMode_Dagwood::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCameraMode_Dagwood");

	return Clss;
}


// FortCameraMode_Dagwood ValetRuntime.Default__FortCameraMode_Dagwood
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCameraMode_Dagwood* UFortCameraMode_Dagwood::GetDefaultObj()
{
	static class UFortCameraMode_Dagwood* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCameraMode_Dagwood*>(UFortCameraMode_Dagwood::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
// (None)

class UClass* UFortContextualTutorial_VehicleValetLowFuel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortContextualTutorial_VehicleValetLowFuel");

	return Clss;
}


// FortContextualTutorial_VehicleValetLowFuel ValetRuntime.Default__FortContextualTutorial_VehicleValetLowFuel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortContextualTutorial_VehicleValetLowFuel* UFortContextualTutorial_VehicleValetLowFuel::GetDefaultObj()
{
	static class UFortContextualTutorial_VehicleValetLowFuel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortContextualTutorial_VehicleValetLowFuel*>(UFortContextualTutorial_VehicleValetLowFuel::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged
// (Final, Native, Private)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      NewVehicle                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OldVehicle                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_VehicleValetLowFuel::HandleVehicleStateChanged(class UFortPlayerPawn* PlayerPawn, class UActor* NewVehicle, class UActor* OldVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortContextualTutorial_VehicleValetLowFuel", "HandleVehicleStateChanged");

	Params::UFortContextualTutorial_VehicleValetLowFuel_HandleVehicleStateChanged_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.NewVehicle = NewVehicle;
	Parms.OldVehicle = OldVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation
// (Final, Native, Private)
// Parameters:

void UFortContextualTutorial_VehicleValetLowFuel::HandleStartSkydivingForActivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortContextualTutorial_VehicleValetLowFuel", "HandleStartSkydivingForActivation");

	Params::UFortContextualTutorial_VehicleValetLowFuel_HandleStartSkydivingForActivation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValetRuntime.FortDagwoodModsConfigs
// (None)

class UClass* UFortDagwoodModsConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDagwoodModsConfigs");

	return Clss;
}


// FortDagwoodModsConfigs ValetRuntime.Default__FortDagwoodModsConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDagwoodModsConfigs* UFortDagwoodModsConfigs::GetDefaultObj()
{
	static class UFortDagwoodModsConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDagwoodModsConfigs*>(UFortDagwoodModsConfigs::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortDagwoodVehicle
// (Actor, Pawn)

class UClass* UFortDagwoodVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDagwoodVehicle");

	return Clss;
}


// FortDagwoodVehicle ValetRuntime.Default__FortDagwoodVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDagwoodVehicle* UFortDagwoodVehicle::GetDefaultObj()
{
	static class UFortDagwoodVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDagwoodVehicle*>(UFortDagwoodVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.FortDagwoodVehicle.StartFade
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortDagwoodVehicle::StartFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "StartFade");

	Params::UFortDagwoodVehicle_StartFade_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetValetAudioController
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortValetAudioController*   ValetAudio                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetValetAudioController(class UFortValetAudioController* ValetAudio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetValetAudioController");

	Params::UFortDagwoodVehicle_SetValetAudioController_Params Parms{};

	Parms.ValetAudio = ValetAudio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeSpringsInfoOnServer
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeSpringsInfo         SpringsInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetRuntimeSpringsInfoOnServer(struct FRuntimeSpringsInfo& SpringsInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetRuntimeSpringsInfoOnServer");

	Params::UFortDagwoodVehicle_SetRuntimeSpringsInfoOnServer_Params Parms{};

	Parms.SpringsInfo = SpringsInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeGravityOnServer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              GravMult                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetRuntimeGravityOnServer(float GravMult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetRuntimeGravityOnServer");

	Params::UFortDagwoodVehicle_SetRuntimeGravityOnServer_Params Parms{};

	Parms.GravMult = GravMult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeFuelInfoOnServer
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeFuelInfo            FuelInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetRuntimeFuelInfoOnServer(struct FRuntimeFuelInfo& FuelInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetRuntimeFuelInfoOnServer");

	Params::UFortDagwoodVehicle_SetRuntimeFuelInfoOnServer_Params Parms{};

	Parms.FuelInfo = FuelInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeDriveInfoOnServer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              MaxIncline                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxTilt                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetRuntimeDriveInfoOnServer(float MaxIncline, float MaxTilt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetRuntimeDriveInfoOnServer");

	Params::UFortDagwoodVehicle_SetRuntimeDriveInfoOnServer_Params Parms{};

	Parms.MaxIncline = MaxIncline;
	Parms.MaxTilt = MaxTilt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeBoostInfoOnServer
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeBoostInfo           BoostInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetRuntimeBoostInfoOnServer(struct FRuntimeBoostInfo& BoostInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetRuntimeBoostInfoOnServer");

	Params::UFortDagwoodVehicle_SetRuntimeBoostInfoOnServer_Params Parms{};

	Parms.BoostInfo = BoostInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetDamageInfoOnServer
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bInDamageFriendlyVehicles                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInDamageOtherVehicles                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInDamageOwnVehicle                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInDamageAllowedFromOtherVehicle                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetDamageInfoOnServer(bool bInDamageFriendlyVehicles, bool bInDamageOtherVehicles, bool bInDamageOwnVehicle, bool bInDamageAllowedFromOtherVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetDamageInfoOnServer");

	Params::UFortDagwoodVehicle_SetDamageInfoOnServer_Params Parms{};

	Parms.bInDamageFriendlyVehicles = bInDamageFriendlyVehicles;
	Parms.bInDamageOtherVehicles = bInDamageOtherVehicles;
	Parms.bInDamageOwnVehicle = bInDamageOwnVehicle;
	Parms.bInDamageAllowedFromOtherVehicle = bInDamageAllowedFromOtherVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSetFadeDuration
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewFadeDuration                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::ServerSetFadeDuration(float NewFadeDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetFadeDuration");

	Params::UFortDagwoodVehicle_ServerSetFadeDuration_Params Parms{};

	Parms.NewFadeDuration = NewFadeDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSelfDestructActivated
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UFortDagwoodVehicle::ServerSelfDestructActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSelfDestructActivated");

	Params::UFortDagwoodVehicle_ServerSelfDestructActivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SelfDestructCleanup
// (Final, Native, Public)
// Parameters:

void UFortDagwoodVehicle::SelfDestructCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SelfDestructCleanup");

	Params::UFortDagwoodVehicle_SelfDestructCleanup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              FadeParam                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnTickAudioFade(float FadeParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnTickAudioFade");

	Params::UFortDagwoodVehicle_OnTickAudioFade_Params Parms{};

	Parms.FadeParam = FadeParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnTickAudioController(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnTickAudioController");

	Params::UFortDagwoodVehicle_OnTickAudioController_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnStopHandbrake
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::OnStopHandbrake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnStopHandbrake");

	Params::UFortDagwoodVehicle_OnStopHandbrake_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnStartHandbrake
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::OnStartHandbrake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnStartHandbrake");

	Params::UFortDagwoodVehicle_OnStartHandbrake_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnServerAltInteract(class UFortPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnServerAltInteract");

	Params::UFortDagwoodVehicle_OnServerAltInteract_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_ServerRepWheelData
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FAttachedWheel>      PrevWheelData                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnRep_ServerRepWheelData(TArray<struct FAttachedWheel>& PrevWheelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_ServerRepWheelData");

	Params::UFortDagwoodVehicle_OnRep_ServerRepWheelData_Params Parms{};

	Parms.PrevWheelData = PrevWheelData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed
// (Final, Native, Private)
// Parameters:

void UFortDagwoodVehicle::OnRep_RandSeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_RandSeed");

	Params::UFortDagwoodVehicle_OnRep_RandSeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction
// (Final, Native, Private)
// Parameters:

void UFortDagwoodVehicle::OnRep_PoppedTireReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_PoppedTireReaction");

	Params::UFortDagwoodVehicle_OnRep_PoppedTireReaction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable
// (Final, Native, Private)
// Parameters:

void UFortDagwoodVehicle::OnRep_IsInoperable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_IsInoperable");

	Params::UFortDagwoodVehicle_OnRep_IsInoperable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_FakeTires
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<enum class ETireStates>     PrevTireStates                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnRep_FakeTires(TArray<enum class ETireStates>& PrevTireStates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_FakeTires");

	Params::UFortDagwoodVehicle_OnRep_FakeTires_Params Parms{};

	Parms.PrevTireStates = PrevTireStates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_DagwoodRuntimeModifiers
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FDagwoodRuntimeModifiers    PrevMods                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnRep_DagwoodRuntimeModifiers(struct FDagwoodRuntimeModifiers& PrevMods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_DagwoodRuntimeModifiers");

	Params::UFortDagwoodVehicle_OnRep_DagwoodRuntimeModifiers_Params Parms{};

	Parms.PrevMods = PrevMods;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInoperable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnInoperableChanged(bool bInoperable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnInoperableChanged");

	Params::UFortDagwoodVehicle_OnInoperableChanged_Params Parms{};

	Parms.bInoperable = bInoperable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStopped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPawn*                   DriverPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnHoldSelfDestructStopped(class UFortPawn* DriverPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnHoldSelfDestructStopped");

	Params::UFortDagwoodVehicle_OnHoldSelfDestructStopped_Params Parms{};

	Parms.DriverPawn = DriverPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPawn*                   DriverPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ExitDuration                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnHoldSelfDestructStarted(class UFortPawn* DriverPawn, float ExitDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnHoldSelfDestructStarted");

	Params::UFortDagwoodVehicle_OnHoldSelfDestructStarted_Params Parms{};

	Parms.DriverPawn = DriverPawn;
	Parms.ExitDuration = ExitDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::OnFlipImpactDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnFlipImpactDamage");

	Params::UFortDagwoodVehicle_OnFlipImpactDamage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBuildingActor*              BuildingHitActor                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnDestroyedPropFromCollision(class UBuildingActor* BuildingHitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnDestroyedPropFromCollision");

	Params::UFortDagwoodVehicle_OnDestroyedPropFromCollision_Params Parms{};

	Parms.BuildingHitActor = BuildingHitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnClientBeginAltInteract(class UFortPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnClientBeginAltInteract");

	Params::UFortDagwoodVehicle_OnClientBeginAltInteract_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnBoostReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::OnBoostReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnBoostReady");

	Params::UFortDagwoodVehicle_OnBoostReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnBoostFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::OnBoostFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnBoostFailed");

	Params::UFortDagwoodVehicle_OnBoostFailed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              MaxIntensity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortDagwoodVehicle::NativeCalculateAccelRumbleIntensity(float MaxIntensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "NativeCalculateAccelRumbleIntensity");

	Params::UFortDagwoodVehicle_NativeCalculateAccelRumbleIntensity_Params Parms{};

	Parms.MaxIntensity = MaxIntensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.MakeOperable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAddGas                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::MakeOperable(bool bAddGas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "MakeOperable");

	Params::UFortDagwoodVehicle_MakeOperable_Params Parms{};

	Parms.bAddGas = bAddGas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.MakeInoperable
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortDagwoodVehicle::MakeInoperable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "MakeInoperable");

	Params::UFortDagwoodVehicle_MakeInoperable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.IsTireSkidding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              MinSpeedForSkid                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AngleForSkid                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpeedForPeelout                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpeedForBraking                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortDagwoodVehicle::IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsTireSkidding");

	Params::UFortDagwoodVehicle_IsTireSkidding_Params Parms{};

	Parms.MinSpeedForSkid = MinSpeedForSkid;
	Parms.AngleForSkid = AngleForSkid;
	Parms.SpeedForPeelout = SpeedForPeelout;
	Parms.SpeedForBraking = SpeedForBraking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortDagwoodVehicle::IsOnLandscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsOnLandscape");

	Params::UFortDagwoodVehicle_IsOnLandscape_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortDagwoodVehicle::IsNativeBPTickEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsNativeBPTickEnabled");

	Params::UFortDagwoodVehicle_IsNativeBPTickEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.HandleCurrentPlaylistLoaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::HandleCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "HandleCurrentPlaylistLoaded");

	Params::UFortDagwoodVehicle_HandleCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.GetTireSurface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETireLocations          TireIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETireSurfaces           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETireSurfaces UFortDagwoodVehicle::GetTireSurface(enum class ETireLocations TireIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetTireSurface");

	Params::UFortDagwoodVehicle_GetTireSurface_Params Parms{};

	Parms.TireIndex = TireIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETireLocations          TireIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortDagwoodVehicle::GetTireHealthPercent(enum class ETireLocations TireIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetTireHealthPercent");

	Params::UFortDagwoodVehicle_GetTireHealthPercent_Params Parms{};

	Parms.TireIndex = TireIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetMiddleAxleForwardAdjust
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortDagwoodVehicle::GetMiddleAxleForwardAdjust()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetMiddleAxleForwardAdjust");

	Params::UFortDagwoodVehicle_GetMiddleAxleForwardAdjust_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetCurrentDagwoodRuntimeProperties
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FDagwoodRuntimeModifiers    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FDagwoodRuntimeModifiers UFortDagwoodVehicle::GetCurrentDagwoodRuntimeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetCurrentDagwoodRuntimeProperties");

	Params::UFortDagwoodVehicle_GetCurrentDagwoodRuntimeProperties_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetBumpiness
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortDagwoodVehicle::GetBumpiness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetBumpiness");

	Params::UFortDagwoodVehicle_GetBumpiness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortDagwoodVehicle::ForwardOrReverseInputPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ForwardOrReverseInputPressed");

	Params::UFortDagwoodVehicle_ForwardOrReverseInputPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::CleanupLoopingPooledFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "CleanupLoopingPooledFX");

	Params::UFortDagwoodVehicle_CleanupLoopingPooledFX_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ApplyRuntimeModifiers
// (Final, Native, Private)
// Parameters:

void UFortDagwoodVehicle::ApplyRuntimeModifiers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ApplyRuntimeModifiers");

	Params::UFortDagwoodVehicle_ApplyRuntimeModifiers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.AddRuntimeGearsInfoOnServer
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeGearInfo            GearInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::AddRuntimeGearsInfoOnServer(struct FRuntimeGearInfo& GearInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "AddRuntimeGearsInfoOnServer");

	Params::UFortDagwoodVehicle_AddRuntimeGearsInfoOnServer_Params Parms{};

	Parms.GearInfo = GearInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValetRuntime.FortDagwoodVehicleAnimInstance
// (None)

class UClass* UFortDagwoodVehicleAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDagwoodVehicleAnimInstance");

	return Clss;
}


// FortDagwoodVehicleAnimInstance ValetRuntime.Default__FortDagwoodVehicleAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDagwoodVehicleAnimInstance* UFortDagwoodVehicleAnimInstance::GetDefaultObj()
{
	static class UFortDagwoodVehicleAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDagwoodVehicleAnimInstance*>(UFortDagwoodVehicleAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortDagwoodVehicleConfigs
// (None)

class UClass* UFortDagwoodVehicleConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDagwoodVehicleConfigs");

	return Clss;
}


// FortDagwoodVehicleConfigs ValetRuntime.Default__FortDagwoodVehicleConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDagwoodVehicleConfigs* UFortDagwoodVehicleConfigs::GetDefaultObj()
{
	static class UFortDagwoodVehicleConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDagwoodVehicleConfigs*>(UFortDagwoodVehicleConfigs::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortDagwoodVehicleManager
// (None)

class UClass* UFortDagwoodVehicleManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDagwoodVehicleManager");

	return Clss;
}


// FortDagwoodVehicleManager ValetRuntime.Default__FortDagwoodVehicleManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDagwoodVehicleManager* UFortDagwoodVehicleManager::GetDefaultObj()
{
	static class UFortDagwoodVehicleManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDagwoodVehicleManager*>(UFortDagwoodVehicleManager::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement
// (Final, Native, Public)
// Parameters:

void UFortDagwoodVehicleManager::UpdatePropReplacement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "UpdatePropReplacement");

	Params::UFortDagwoodVehicleManager_UpdatePropReplacement_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UFortVehicleItemDefinition*  VehicleItemDef                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              SpawnedVehicles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              NewVehicleCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicleManager::OnVehicleSpawnsUpdated(class UFortVehicleItemDefinition* VehicleItemDef, TArray<class UActor*>* SpawnedVehicles, int32 NewVehicleCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "OnVehicleSpawnsUpdated");

	Params::UFortDagwoodVehicleManager_OnVehicleSpawnsUpdated_Params Parms{};

	Parms.VehicleItemDef = VehicleItemDef;
	Parms.NewVehicleCount = NewVehicleCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpawnedVehicles != nullptr)
		*SpawnedVehicles = Parms.SpawnedVehicles;

}


// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned
// (Final, Native, Public)
// Parameters:
// class UFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicleManager::OnVehicleSpawned(class UFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "OnVehicleSpawned");

	Params::UFortDagwoodVehicleManager_OnVehicleSpawned_Params Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor
// (Final, Native, Public)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicleManager::CustomHandleActorStreamedInEditor(class UActor* SourceActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "CustomHandleActorStreamedInEditor");

	Params::UFortDagwoodVehicleManager_CustomHandleActorStreamedInEditor_Params Parms{};

	Parms.SourceActor = SourceActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValetRuntime.FortValetAudioController
// (Actor)

class UClass* UFortValetAudioController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortValetAudioController");

	return Clss;
}


// FortValetAudioController ValetRuntime.Default__FortValetAudioController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortValetAudioController* UFortValetAudioController::GetDefaultObj()
{
	static class UFortValetAudioController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortValetAudioController*>(UFortValetAudioController::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.FortValetAudioController.Update_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortValetAudioController::Update_Native()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortValetAudioController", "Update_Native");

	Params::UFortValetAudioController_Update_Native_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortValetAudioController.OnTireModApplied
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FTireInfo                   AppliedTireMod                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortValetAudioController::OnTireModApplied(struct FTireInfo& AppliedTireMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortValetAudioController", "OnTireModApplied");

	Params::UFortValetAudioController_OnTireModApplied_Params Parms{};

	Parms.AppliedTireMod = AppliedTireMod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutMagnitude                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortValetAudioController::OnSuspensionCollision_Native(bool* OutResult, float* OutMagnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortValetAudioController", "OnSuspensionCollision_Native");

	Params::UFortValetAudioController_OnSuspensionCollision_Native_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	if (OutMagnitude != nullptr)
		*OutMagnitude = Parms.OutMagnitude;

}


// Function ValetRuntime.FortValetAudioController.CacheValetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortDagwoodVehicle*         InVehicle                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortValetAudioController::CacheValetVehicle(class UFortDagwoodVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortValetAudioController", "CacheValetVehicle");

	Params::UFortValetAudioController_CacheValetVehicle_Params Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValetRuntime.FortValetGameFeatureData
// (None)

class UClass* UFortValetGameFeatureData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortValetGameFeatureData");

	return Clss;
}


// FortValetGameFeatureData ValetRuntime.Default__FortValetGameFeatureData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortValetGameFeatureData* UFortValetGameFeatureData::GetDefaultObj()
{
	static class UFortValetGameFeatureData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortValetGameFeatureData*>(UFortValetGameFeatureData::StaticClass()->DefaultObject);

	return Default;
}

}


