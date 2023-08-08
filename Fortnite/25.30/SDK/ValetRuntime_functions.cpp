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


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetState_GT
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FDagwoodInPersistent        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDagwoodNetworkPhysicsComponent::SetState_GT(struct FDagwoodInPersistent& In)
{
	static auto Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "SetState_GT");

	Params::UDagwoodNetworkPhysicsComponent_SetState_GT_Params Parms;

	Parms.In = In;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetPendingInputCmd
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFortDagwoodCmd             In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UDagwoodNetworkPhysicsComponent::SetPendingInputCmd(struct FFortDagwoodCmd& In)
{
	static auto Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "SetPendingInputCmd");

	Params::UDagwoodNetworkPhysicsComponent_SetPendingInputCmd_Params Parms;

	Parms.In = In;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValetRuntime.DagwoodNetworkPhysicsComponent.OnGeneratedLocalInputCmd__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UDagwoodNetworkPhysicsComponent::OnGeneratedLocalInputCmd__DelegateSignature()
{
	static auto Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "OnGeneratedLocalInputCmd__DelegateSignature");

	Params::UDagwoodNetworkPhysicsComponent_OnGeneratedLocalInputCmd__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_PT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDagwoodState_PT            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FDagwoodState_PT UDagwoodNetworkPhysicsComponent::GetState_PT()
{
	static auto Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetState_PT");

	Params::UDagwoodNetworkPhysicsComponent_GetState_PT_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_GT
// (Final, Native, Public, Const)
// Parameters:
// struct FDagwoodInPersistent        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FDagwoodInPersistent UDagwoodNetworkPhysicsComponent::GetState_GT()
{
	static auto Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetState_GT");

	Params::UDagwoodNetworkPhysicsComponent_GetState_GT_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetPendingInputCmd
// (Final, Native, Public, Const)
// Parameters:
// struct FFortDagwoodCmd             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFortDagwoodCmd UDagwoodNetworkPhysicsComponent::GetPendingInputCmd()
{
	static auto Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetPendingInputCmd");

	Params::UDagwoodNetworkPhysicsComponent_GetPendingInputCmd_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters.OnPlaylistLoaded
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContainerTags                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaMutator_OverrideValetVehicleParameters::OnPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContainerTags)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_OverrideValetVehicleParameters", "OnPlaylistLoaded");

	Params::UFortAthenaMutator_OverrideValetVehicleParameters_OnPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContainerTags = PlaylistContainerTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged
// (Final, Native, Private)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      NewVehicle                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OldVehicle                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_VehicleValetLowFuel::HandleVehicleStateChanged(class UFortPlayerPawn* PlayerPawn, class UActor* NewVehicle, class UActor* OldVehicle)
{
	static auto Func = Class->GetFunction("FortContextualTutorial_VehicleValetLowFuel", "HandleVehicleStateChanged");

	Params::UFortContextualTutorial_VehicleValetLowFuel_HandleVehicleStateChanged_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.NewVehicle = NewVehicle;
	Parms.OldVehicle = OldVehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation
// (Final, Native, Private)
// Parameters:

void UFortContextualTutorial_VehicleValetLowFuel::HandleStartSkydivingForActivation()
{
	static auto Func = Class->GetFunction("FortContextualTutorial_VehicleValetLowFuel", "HandleStartSkydivingForActivation");

	Params::UFortContextualTutorial_VehicleValetLowFuel_HandleStartSkydivingForActivation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.StartFade
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortDagwoodVehicle::StartFade()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "StartFade");

	Params::UFortDagwoodVehicle_StartFade_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.SetValetAudioController
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortValetAudioController*   ValetAudio                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetValetAudioController(class UFortValetAudioController* ValetAudio)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "SetValetAudioController");

	Params::UFortDagwoodVehicle_SetValetAudioController_Params Parms;

	Parms.ValetAudio = ValetAudio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeSpringsInfoOnServer
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeSpringsInfo         SpringsInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetRuntimeSpringsInfoOnServer(struct FRuntimeSpringsInfo& SpringsInfo)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "SetRuntimeSpringsInfoOnServer");

	Params::UFortDagwoodVehicle_SetRuntimeSpringsInfoOnServer_Params Parms;

	Parms.SpringsInfo = SpringsInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeGravityOnServer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              GravMult                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetRuntimeGravityOnServer(float GravMult)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "SetRuntimeGravityOnServer");

	Params::UFortDagwoodVehicle_SetRuntimeGravityOnServer_Params Parms;

	Parms.GravMult = GravMult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeFuelInfoOnServer
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeFuelInfo            FuelInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetRuntimeFuelInfoOnServer(struct FRuntimeFuelInfo& FuelInfo)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "SetRuntimeFuelInfoOnServer");

	Params::UFortDagwoodVehicle_SetRuntimeFuelInfoOnServer_Params Parms;

	Parms.FuelInfo = FuelInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeDriveInfoOnServer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              MaxIncline                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxTilt                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetRuntimeDriveInfoOnServer(float MaxIncline, float MaxTilt)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "SetRuntimeDriveInfoOnServer");

	Params::UFortDagwoodVehicle_SetRuntimeDriveInfoOnServer_Params Parms;

	Parms.MaxIncline = MaxIncline;
	Parms.MaxTilt = MaxTilt;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeBoostInfoOnServer
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeBoostInfo           BoostInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::SetRuntimeBoostInfoOnServer(struct FRuntimeBoostInfo& BoostInfo)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "SetRuntimeBoostInfoOnServer");

	Params::UFortDagwoodVehicle_SetRuntimeBoostInfoOnServer_Params Parms;

	Parms.BoostInfo = BoostInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "SetDamageInfoOnServer");

	Params::UFortDagwoodVehicle_SetDamageInfoOnServer_Params Parms;

	Parms.bInDamageFriendlyVehicles = bInDamageFriendlyVehicles;
	Parms.bInDamageOtherVehicles = bInDamageOtherVehicles;
	Parms.bInDamageOwnVehicle = bInDamageOwnVehicle;
	Parms.bInDamageAllowedFromOtherVehicle = bInDamageAllowedFromOtherVehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSetFadeDuration
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewFadeDuration                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::ServerSetFadeDuration(float NewFadeDuration)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetFadeDuration");

	Params::UFortDagwoodVehicle_ServerSetFadeDuration_Params Parms;

	Parms.NewFadeDuration = NewFadeDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSelfDestructActivated
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UFortDagwoodVehicle::ServerSelfDestructActivated()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "ServerSelfDestructActivated");

	Params::UFortDagwoodVehicle_ServerSelfDestructActivated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.SelfDestructCleanup
// (Final, Native, Public)
// Parameters:

void UFortDagwoodVehicle::SelfDestructCleanup()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "SelfDestructCleanup");

	Params::UFortDagwoodVehicle_SelfDestructCleanup_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              FadeParam                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnTickAudioFade(float FadeParam)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnTickAudioFade");

	Params::UFortDagwoodVehicle_OnTickAudioFade_Params Parms;

	Parms.FadeParam = FadeParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnTickAudioController(float DeltaTime)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnTickAudioController");

	Params::UFortDagwoodVehicle_OnTickAudioController_Params Parms;

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnStopHandbrake
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::OnStopHandbrake()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnStopHandbrake");

	Params::UFortDagwoodVehicle_OnStopHandbrake_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnStartHandbrake
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::OnStartHandbrake()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnStartHandbrake");

	Params::UFortDagwoodVehicle_OnStartHandbrake_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnServerAltInteract(class UFortPawn* Pawn)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnServerAltInteract");

	Params::UFortDagwoodVehicle_OnServerAltInteract_Params Parms;

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_ServerRepWheelData
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FAttachedWheel>      PrevWheelData                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnRep_ServerRepWheelData(TArray<struct FAttachedWheel>& PrevWheelData)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_ServerRepWheelData");

	Params::UFortDagwoodVehicle_OnRep_ServerRepWheelData_Params Parms;

	Parms.PrevWheelData = PrevWheelData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed
// (Final, Native, Private)
// Parameters:

void UFortDagwoodVehicle::OnRep_RandSeed()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_RandSeed");

	Params::UFortDagwoodVehicle_OnRep_RandSeed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction
// (Final, Native, Private)
// Parameters:

void UFortDagwoodVehicle::OnRep_PoppedTireReaction()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_PoppedTireReaction");

	Params::UFortDagwoodVehicle_OnRep_PoppedTireReaction_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable
// (Final, Native, Private)
// Parameters:

void UFortDagwoodVehicle::OnRep_IsInoperable()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_IsInoperable");

	Params::UFortDagwoodVehicle_OnRep_IsInoperable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_FakeTires
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<enum class ETireStates>     PrevTireStates                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnRep_FakeTires(TArray<enum class ETireStates>& PrevTireStates)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_FakeTires");

	Params::UFortDagwoodVehicle_OnRep_FakeTires_Params Parms;

	Parms.PrevTireStates = PrevTireStates;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_DagwoodRuntimeModifiers
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FDagwoodRuntimeModifiers    PrevMods                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnRep_DagwoodRuntimeModifiers(struct FDagwoodRuntimeModifiers& PrevMods)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_DagwoodRuntimeModifiers");

	Params::UFortDagwoodVehicle_OnRep_DagwoodRuntimeModifiers_Params Parms;

	Parms.PrevMods = PrevMods;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInoperable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnInoperableChanged(bool bInoperable)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnInoperableChanged");

	Params::UFortDagwoodVehicle_OnInoperableChanged_Params Parms;

	Parms.bInoperable = bInoperable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStopped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPawn*                   DriverPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnHoldSelfDestructStopped(class UFortPawn* DriverPawn)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnHoldSelfDestructStopped");

	Params::UFortDagwoodVehicle_OnHoldSelfDestructStopped_Params Parms;

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
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnHoldSelfDestructStarted");

	Params::UFortDagwoodVehicle_OnHoldSelfDestructStarted_Params Parms;

	Parms.DriverPawn = DriverPawn;
	Parms.ExitDuration = ExitDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::OnFlipImpactDamage()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnFlipImpactDamage");

	Params::UFortDagwoodVehicle_OnFlipImpactDamage_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBuildingActor*              BuildingHitActor                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnDestroyedPropFromCollision(class UBuildingActor* BuildingHitActor)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnDestroyedPropFromCollision");

	Params::UFortDagwoodVehicle_OnDestroyedPropFromCollision_Params Parms;

	Parms.BuildingHitActor = BuildingHitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::OnClientBeginAltInteract(class UFortPawn* Pawn)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnClientBeginAltInteract");

	Params::UFortDagwoodVehicle_OnClientBeginAltInteract_Params Parms;

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnBoostReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::OnBoostReady()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnBoostReady");

	Params::UFortDagwoodVehicle_OnBoostReady_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnBoostFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::OnBoostFailed()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "OnBoostFailed");

	Params::UFortDagwoodVehicle_OnBoostFailed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              MaxIntensity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortDagwoodVehicle::NativeCalculateAccelRumbleIntensity(float MaxIntensity)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "NativeCalculateAccelRumbleIntensity");

	Params::UFortDagwoodVehicle_NativeCalculateAccelRumbleIntensity_Params Parms;

	Parms.MaxIntensity = MaxIntensity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.MakeOperable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAddGas                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::MakeOperable(bool bAddGas)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "MakeOperable");

	Params::UFortDagwoodVehicle_MakeOperable_Params Parms;

	Parms.bAddGas = bAddGas;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.MakeInoperable
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortDagwoodVehicle::MakeInoperable()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "MakeInoperable");

	Params::UFortDagwoodVehicle_MakeInoperable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "IsTireSkidding");

	Params::UFortDagwoodVehicle_IsTireSkidding_Params Parms;

	Parms.MinSpeedForSkid = MinSpeedForSkid;
	Parms.AngleForSkid = AngleForSkid;
	Parms.SpeedForPeelout = SpeedForPeelout;
	Parms.SpeedForBraking = SpeedForBraking;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortDagwoodVehicle::IsOnLandscape()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "IsOnLandscape");

	Params::UFortDagwoodVehicle_IsOnLandscape_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortDagwoodVehicle::IsNativeBPTickEnabled()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "IsNativeBPTickEnabled");

	Params::UFortDagwoodVehicle_IsNativeBPTickEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.HandleCurrentPlaylistLoaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::HandleCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "HandleCurrentPlaylistLoaded");

	Params::UFortDagwoodVehicle_HandleCurrentPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.GetTireSurface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETireLocations          TireIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETireSurfaces           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETireSurfaces UFortDagwoodVehicle::GetTireSurface(enum class ETireLocations TireIndex)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "GetTireSurface");

	Params::UFortDagwoodVehicle_GetTireSurface_Params Parms;

	Parms.TireIndex = TireIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETireLocations          TireIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortDagwoodVehicle::GetTireHealthPercent(enum class ETireLocations TireIndex)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "GetTireHealthPercent");

	Params::UFortDagwoodVehicle_GetTireHealthPercent_Params Parms;

	Parms.TireIndex = TireIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetMiddleAxleForwardAdjust
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortDagwoodVehicle::GetMiddleAxleForwardAdjust()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "GetMiddleAxleForwardAdjust");

	Params::UFortDagwoodVehicle_GetMiddleAxleForwardAdjust_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetCurrentDagwoodRuntimeProperties
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FDagwoodRuntimeModifiers    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FDagwoodRuntimeModifiers UFortDagwoodVehicle::GetCurrentDagwoodRuntimeProperties()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "GetCurrentDagwoodRuntimeProperties");

	Params::UFortDagwoodVehicle_GetCurrentDagwoodRuntimeProperties_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetBumpiness
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortDagwoodVehicle::GetBumpiness()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "GetBumpiness");

	Params::UFortDagwoodVehicle_GetBumpiness_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortDagwoodVehicle::ForwardOrReverseInputPressed()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "ForwardOrReverseInputPressed");

	Params::UFortDagwoodVehicle_ForwardOrReverseInputPressed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortDagwoodVehicle::CleanupLoopingPooledFX()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "CleanupLoopingPooledFX");

	Params::UFortDagwoodVehicle_CleanupLoopingPooledFX_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.ApplyRuntimeModifiers
// (Final, Native, Private)
// Parameters:

void UFortDagwoodVehicle::ApplyRuntimeModifiers()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "ApplyRuntimeModifiers");

	Params::UFortDagwoodVehicle_ApplyRuntimeModifiers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicle.AddRuntimeGearsInfoOnServer
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeGearInfo            GearInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortDagwoodVehicle::AddRuntimeGearsInfoOnServer(struct FRuntimeGearInfo& GearInfo)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicle", "AddRuntimeGearsInfoOnServer");

	Params::UFortDagwoodVehicle_AddRuntimeGearsInfoOnServer_Params Parms;

	Parms.GearInfo = GearInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement
// (Final, Native, Public)
// Parameters:

void UFortDagwoodVehicleManager::UpdatePropReplacement()
{
	static auto Func = Class->GetFunction("FortDagwoodVehicleManager", "UpdatePropReplacement");

	Params::UFortDagwoodVehicleManager_UpdatePropReplacement_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UFortVehicleItemDefinition*  VehicleItemDef                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              SpawnedVehicles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              NewVehicleCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicleManager::OnVehicleSpawnsUpdated(class UFortVehicleItemDefinition* VehicleItemDef, TArray<class UActor*>* SpawnedVehicles, int32 NewVehicleCount)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicleManager", "OnVehicleSpawnsUpdated");

	Params::UFortDagwoodVehicleManager_OnVehicleSpawnsUpdated_Params Parms;

	Parms.VehicleItemDef = VehicleItemDef;
	Parms.NewVehicleCount = NewVehicleCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SpawnedVehicles != nullptr)
		*SpawnedVehicles = Parms.SpawnedVehicles;

}


// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned
// (Final, Native, Public)
// Parameters:
// class UFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicleManager::OnVehicleSpawned(class UFortAthenaVehicle* Vehicle)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicleManager", "OnVehicleSpawned");

	Params::UFortDagwoodVehicleManager_OnVehicleSpawned_Params Parms;

	Parms.Vehicle = Vehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor
// (Final, Native, Public)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicleManager::CustomHandleActorStreamedInEditor(class UActor* SourceActor)
{
	static auto Func = Class->GetFunction("FortDagwoodVehicleManager", "CustomHandleActorStreamedInEditor");

	Params::UFortDagwoodVehicleManager_CustomHandleActorStreamedInEditor_Params Parms;

	Parms.SourceActor = SourceActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortValetAudioController.Update_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortValetAudioController::Update_Native()
{
	static auto Func = Class->GetFunction("FortValetAudioController", "Update_Native");

	Params::UFortValetAudioController_Update_Native_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValetRuntime.FortValetAudioController.OnTireModApplied
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FTireInfo                   AppliedTireMod                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortValetAudioController::OnTireModApplied(struct FTireInfo& AppliedTireMod)
{
	static auto Func = Class->GetFunction("FortValetAudioController", "OnTireModApplied");

	Params::UFortValetAudioController_OnTireModApplied_Params Parms;

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
	static auto Func = Class->GetFunction("FortValetAudioController", "OnSuspensionCollision_Native");

	Params::UFortValetAudioController_OnSuspensionCollision_Native_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("FortValetAudioController", "CacheValetVehicle");

	Params::UFortValetAudioController_CacheValetVehicle_Params Parms;

	Parms.InVehicle = InVehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
