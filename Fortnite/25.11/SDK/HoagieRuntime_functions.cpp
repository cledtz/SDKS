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


// Function HoagieRuntime.FortHoagieAudioController.Update
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortHoagieAudioController::Update()
{
	static auto Func = Class->GetFunction("FortHoagieAudioController", "Update");

	Params::AFortHoagieAudioController_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortHoagieVehicle*          InVehicle                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieAudioController::CacheHoagieVehicle(class AFortHoagieVehicle* InVehicle)
{
	static auto Func = Class->GetFunction("FortHoagieAudioController", "CacheHoagieVehicle");

	Params::AFortHoagieAudioController_CacheHoagieVehicle_Params Parms;

	Parms.InVehicle = InVehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieAudioController.CacheAudioComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLayeredAudioComponent*  InEngine                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortLayeredAudioComponent*  InRotor                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieAudioController::CacheAudioComponents(class UFortLayeredAudioComponent* InEngine, class UFortLayeredAudioComponent* InRotor)
{
	static auto Func = Class->GetFunction("FortHoagieAudioController", "CacheAudioComponents");

	Params::AFortHoagieAudioController_CacheAudioComponents_Params Parms;

	Parms.InEngine = InEngine;
	Parms.InRotor = InRotor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFortHoagieVehicle::UpdateHoagieAnimBP()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "UpdateHoagieAnimBP");

	Params::AFortHoagieVehicle_UpdateHoagieAnimBP_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::UpdateDamageStateNative(float Damage)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "UpdateDamageStateNative");

	Params::AFortHoagieVehicle_UpdateDamageStateNative_Params Parms;

	Parms.Damage = Damage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieVehicle.ShowCooldownCue
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::ShowCooldownCue(class AFortPlayerPawn* Pawn, float Duration)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "ShowCooldownCue");

	Params::AFortHoagieVehicle_ShowCooldownCue_Params Parms;

	Parms.Pawn = Pawn;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Degrees                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::SetTailRotorRotation(float Degrees)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "SetTailRotorRotation");

	Params::AFortHoagieVehicle_SetTailRotorRotation_Params Parms;

	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.SetRotorWashActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::SetRotorWashActive(bool bActive)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "SetRotorWashActive");

	Params::AFortHoagieVehicle_SetRotorWashActive_Params Parms;

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Degrees                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::SetMainRotorRotation(float Degrees)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "SetMainRotorRotation");

	Params::AFortHoagieVehicle_SetMainRotorRotation_Params Parms;

	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState
// (Final, Net, Native, Event, Private, NetServer)
// Parameters:
// struct FReplicatedHeliControlState InControlState                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::ServerUpdateControlState(const struct FReplicatedHeliControlState& InControlState)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "ServerUpdateControlState");

	Params::AFortHoagieVehicle_ServerUpdateControlState_Params Parms;

	Parms.InControlState = InControlState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieVehicle.OnTickRotors
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              RotorAngleDegrees                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnTickRotors(float RotorAngleDegrees)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnTickRotors");

	Params::AFortHoagieVehicle_OnTickRotors_Params Parms;

	Parms.RotorAngleDegrees = RotorAngleDegrees;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnStartupEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortHoagieVehicle::OnStartupEnd()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnStartupEnd");

	Params::AFortHoagieVehicle_OnStartupEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnStartupBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortHoagieVehicle::OnStartupBegin()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnStartupBegin");

	Params::AFortHoagieVehicle_OnStartupBegin_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorsStop
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortHoagieVehicle::OnRotorsStop()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnRotorsStop");

	Params::AFortHoagieVehicle_OnRotorsStop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnRotorDamagePlayer(struct FHitResult& Impact)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamagePlayer");

	Params::AFortHoagieVehicle_OnRotorDamagePlayer_Params Parms;

	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnRotorDamageDealtOuter(struct FHitResult& Impact)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealtOuter");

	Params::AFortHoagieVehicle_OnRotorDamageDealtOuter_Params Parms;

	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnRotorDamageDealtInner(struct FHitResult& Impact)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealtInner");

	Params::AFortHoagieVehicle_OnRotorDamageDealtInner_Params Parms;

	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bInner                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnRotorDamageDealt(struct FHitResult& Impact, bool bInner)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealt");

	Params::AFortHoagieVehicle_OnRotorDamageDealt_Params Parms;

	Parms.Impact = Impact;
	Parms.bInner = bInner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState
// (Final, Native, Protected)
// Parameters:

void AFortHoagieVehicle::OnRep_HoagieState()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnRep_HoagieState");

	Params::AFortHoagieVehicle_OnRep_HoagieState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieVehicle.OnRep_ControlState
// (Final, Native, Private)
// Parameters:

void AFortHoagieVehicle::OnRep_ControlState()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnRep_ControlState");

	Params::AFortHoagieVehicle_OnRep_ControlState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty
// (Final, Native, Protected)
// Parameters:

void AFortHoagieVehicle::OnRefueledFromEmpty()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnRefueledFromEmpty");

	Params::AFortHoagieVehicle_OnRefueledFromEmpty_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortHoagieVehicle::OnImpactWhileCritical()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnImpactWhileCritical");

	Params::AFortHoagieVehicle_OnImpactWhileCritical_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     HitLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnImpactOtherHoagie(struct FVector& HitLocation, struct FVector& NormalImpulse)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnImpactOtherHoagie");

	Params::AFortHoagieVehicle_OnImpactOtherHoagie_Params Parms;

	Parms.HitLocation = HitLocation;
	Parms.NormalImpulse = NormalImpulse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnCritRotor
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ImpactLocation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 DamageInstigator                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMainRotor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnCritRotor(float Damage, struct FVector& ImpactLocation, class AController* DamageInstigator, class AActor* DamageCauser, bool bMainRotor)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnCritRotor");

	Params::AFortHoagieVehicle_OnCritRotor_Params Parms;

	Parms.Damage = Damage;
	Parms.ImpactLocation = ImpactLocation;
	Parms.DamageInstigator = DamageInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.bMainRotor = bMainRotor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortHoagieVehicle::OnBoostStarted()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnBoostStarted");

	Params::AFortHoagieVehicle_OnBoostStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortHoagieVehicle::OnBoostReady()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnBoostReady");

	Params::AFortHoagieVehicle_OnBoostReady_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortHoagieVehicle::OnBoostFinished()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnBoostFinished");

	Params::AFortHoagieVehicle_OnBoostFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortHoagieVehicle::OnBoostFailed()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "OnBoostFailed");

	Params::AFortHoagieVehicle_OnBoostFailed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse
// (Net, NetReliable, Native, Event, NetMulticast, Protected, BlueprintCallable)
// Parameters:
// struct FHitResult                  RotorHit                                                         (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::MulticastRotorImpulse(struct FHitResult& RotorHit)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "MulticastRotorImpulse");

	Params::AFortHoagieVehicle_MulticastRotorImpulse_Params Parms;

	Parms.RotorHit = RotorHit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieVehicle.IsStartingUp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortHoagieVehicle::IsStartingUp()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "IsStartingUp");

	Params::AFortHoagieVehicle_IsStartingUp_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.IsShuttingDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortHoagieVehicle::IsShuttingDown()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "IsShuttingDown");

	Params::AFortHoagieVehicle_IsShuttingDown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.IsScrapingBottom
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortHoagieVehicle::IsScrapingBottom()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "IsScrapingBottom");

	Params::AFortHoagieVehicle_IsScrapingBottom_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.HoagieOnDisabledChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bDisabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::HoagieOnDisabledChanged(bool bDisabled)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "HoagieOnDisabledChanged");

	Params::AFortHoagieVehicle_HoagieOnDisabledChanged_Params Parms;

	Parms.bDisabled = bDisabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetVerticalSpeedKmh()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetVerticalSpeedKmh");

	Params::AFortHoagieVehicle_GetVerticalSpeedKmh_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetThrustDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortHoagieVehicle::GetThrustDirection(bool bWorldSpace)
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetThrustDirection");

	Params::AFortHoagieVehicle_GetThrustDirection_Params Parms;

	Parms.bWorldSpace = bWorldSpace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetStrafeAlpha()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetStrafeAlpha");

	Params::AFortHoagieVehicle_GetStrafeAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetSteerAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetSteerAlpha()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetSteerAlpha");

	Params::AFortHoagieVehicle_GetSteerAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetShutdownTimeLeft()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetShutdownTimeLeft");

	Params::AFortHoagieVehicle_GetShutdownTimeLeft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetRotorSpeedPercent()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetRotorSpeedPercent");

	Params::AFortHoagieVehicle_GetRotorSpeedPercent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetRotorSpeed()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetRotorSpeed");

	Params::AFortHoagieVehicle_GetRotorSpeed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortHoagieVehicle::GetRotorCenterPosition()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetRotorCenterPosition");

	Params::AFortHoagieVehicle_GetRotorCenterPosition_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetRotorAngleDegrees()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetRotorAngleDegrees");

	Params::AFortHoagieVehicle_GetRotorAngleDegrees_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetMaxBoostCooldown()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetMaxBoostCooldown");

	Params::AFortHoagieVehicle_GetMaxBoostCooldown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetMaxAltitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetMaxAltitude()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetMaxAltitude");

	Params::AFortHoagieVehicle_GetMaxAltitude_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetLiftAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetLiftAlpha()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetLiftAlpha");

	Params::AFortHoagieVehicle_GetLiftAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetIsEngineOn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortHoagieVehicle::GetIsEngineOn()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetIsEngineOn");

	Params::AFortHoagieVehicle_GetIsEngineOn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetForwardAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetForwardAlpha()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetForwardAlpha");

	Params::AFortHoagieVehicle_GetForwardAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetDistanceToGround
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetDistanceToGround()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetDistanceToGround");

	Params::AFortHoagieVehicle_GetDistanceToGround_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetBoostTimeLeft()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetBoostTimeLeft");

	Params::AFortHoagieVehicle_GetBoostTimeLeft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetBoostDuration()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetBoostDuration");

	Params::AFortHoagieVehicle_GetBoostDuration_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortHoagieVehicle::GetBoostDirection()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetBoostDirection");

	Params::AFortHoagieVehicle_GetBoostDirection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetBoostCooldown()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetBoostCooldown");

	Params::AFortHoagieVehicle_GetBoostCooldown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetAltitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetAltitude()
{
	static auto Func = Class->GetFunction("FortHoagieVehicle", "GetAltitude");

	Params::AFortHoagieVehicle_GetAltitude_Params Parms;


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
