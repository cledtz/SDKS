#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HoagieRuntime.FortHoagieDriverAnimInstance
// (None)

class UClass* UFortHoagieDriverAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHoagieDriverAnimInstance");

	return Clss;
}


// FortHoagieDriverAnimInstance HoagieRuntime.Default__FortHoagieDriverAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHoagieDriverAnimInstance* UFortHoagieDriverAnimInstance::GetDefaultObj()
{
	static class UFortHoagieDriverAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHoagieDriverAnimInstance*>(UFortHoagieDriverAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class HoagieRuntime.FortHoagieVehicleAnimInstance
// (None)

class UClass* UFortHoagieVehicleAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHoagieVehicleAnimInstance");

	return Clss;
}


// FortHoagieVehicleAnimInstance HoagieRuntime.Default__FortHoagieVehicleAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHoagieVehicleAnimInstance* UFortHoagieVehicleAnimInstance::GetDefaultObj()
{
	static class UFortHoagieVehicleAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHoagieVehicleAnimInstance*>(UFortHoagieVehicleAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class HoagieRuntime.FortCameraMode_Hoagie
// (None)

class UClass* UFortCameraMode_Hoagie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCameraMode_Hoagie");

	return Clss;
}


// FortCameraMode_Hoagie HoagieRuntime.Default__FortCameraMode_Hoagie
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCameraMode_Hoagie* UFortCameraMode_Hoagie::GetDefaultObj()
{
	static class UFortCameraMode_Hoagie* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCameraMode_Hoagie*>(UFortCameraMode_Hoagie::StaticClass()->DefaultObject);

	return Default;
}


// Class HoagieRuntime.FortHoagieAudioController
// (Actor)

class UClass* UFortHoagieAudioController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHoagieAudioController");

	return Clss;
}


// FortHoagieAudioController HoagieRuntime.Default__FortHoagieAudioController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHoagieAudioController* UFortHoagieAudioController::GetDefaultObj()
{
	static class UFortHoagieAudioController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHoagieAudioController*>(UFortHoagieAudioController::StaticClass()->DefaultObject);

	return Default;
}


// Function HoagieRuntime.FortHoagieAudioController.Update
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortHoagieAudioController::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieAudioController", "Update");

	Params::UFortHoagieAudioController_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortHoagieVehicle*          InVehicle                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieAudioController::CacheHoagieVehicle(class UFortHoagieVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieAudioController", "CacheHoagieVehicle");

	Params::UFortHoagieAudioController_CacheHoagieVehicle_Params Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoagieRuntime.FortHoagieAudioController.CacheAudioComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLayeredAudioComponent*  InEngine                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortLayeredAudioComponent*  InRotor                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieAudioController::CacheAudioComponents(class UFortLayeredAudioComponent* InEngine, class UFortLayeredAudioComponent* InRotor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieAudioController", "CacheAudioComponents");

	Params::UFortHoagieAudioController_CacheAudioComponents_Params Parms{};

	Parms.InEngine = InEngine;
	Parms.InRotor = InRotor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class HoagieRuntime.FortHoagieVehicle
// (Actor, Pawn)

class UClass* UFortHoagieVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHoagieVehicle");

	return Clss;
}


// FortHoagieVehicle HoagieRuntime.Default__FortHoagieVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHoagieVehicle* UFortHoagieVehicle::GetDefaultObj()
{
	static class UFortHoagieVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHoagieVehicle*>(UFortHoagieVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortHoagieVehicle::UpdateHoagieAnimBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "UpdateHoagieAnimBP");

	Params::UFortHoagieVehicle_UpdateHoagieAnimBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::UpdateDamageStateNative(float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "UpdateDamageStateNative");

	Params::UFortHoagieVehicle_UpdateDamageStateNative_Params Parms{};

	Parms.Damage = Damage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoagieRuntime.FortHoagieVehicle.ShowCooldownCue
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::ShowCooldownCue(class UFortPlayerPawn* Pawn, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "ShowCooldownCue");

	Params::UFortHoagieVehicle_ShowCooldownCue_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Degrees                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::SetTailRotorRotation(float Degrees)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "SetTailRotorRotation");

	Params::UFortHoagieVehicle_SetTailRotorRotation_Params Parms{};

	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.SetRotorWashActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::SetRotorWashActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "SetRotorWashActive");

	Params::UFortHoagieVehicle_SetRotorWashActive_Params Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Degrees                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::SetMainRotorRotation(float Degrees)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "SetMainRotorRotation");

	Params::UFortHoagieVehicle_SetMainRotorRotation_Params Parms{};

	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState
// (Final, Net, Native, Event, Private, NetServer)
// Parameters:
// struct FReplicatedHeliControlState InControlState                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::ServerUpdateControlState(const struct FReplicatedHeliControlState& InControlState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "ServerUpdateControlState");

	Params::UFortHoagieVehicle_ServerUpdateControlState_Params Parms{};

	Parms.InControlState = InControlState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoagieRuntime.FortHoagieVehicle.OnTickRotors
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              RotorAngleDegrees                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::OnTickRotors(float RotorAngleDegrees)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnTickRotors");

	Params::UFortHoagieVehicle_OnTickRotors_Params Parms{};

	Parms.RotorAngleDegrees = RotorAngleDegrees;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnStartupEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHoagieVehicle::OnStartupEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnStartupEnd");

	Params::UFortHoagieVehicle_OnStartupEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnStartupBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHoagieVehicle::OnStartupBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnStartupBegin");

	Params::UFortHoagieVehicle_OnStartupBegin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorsStop
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHoagieVehicle::OnRotorsStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorsStop");

	Params::UFortHoagieVehicle_OnRotorsStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::OnRotorDamagePlayer(struct FHitResult& Impact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamagePlayer");

	Params::UFortHoagieVehicle_OnRotorDamagePlayer_Params Parms{};

	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::OnRotorDamageDealtOuter(struct FHitResult& Impact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealtOuter");

	Params::UFortHoagieVehicle_OnRotorDamageDealtOuter_Params Parms{};

	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::OnRotorDamageDealtInner(struct FHitResult& Impact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealtInner");

	Params::UFortHoagieVehicle_OnRotorDamageDealtInner_Params Parms{};

	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bInner                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::OnRotorDamageDealt(struct FHitResult& Impact, bool bInner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealt");

	Params::UFortHoagieVehicle_OnRotorDamageDealt_Params Parms{};

	Parms.Impact = Impact;
	Parms.bInner = bInner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState
// (Final, Native, Protected)
// Parameters:

void UFortHoagieVehicle::OnRep_HoagieState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRep_HoagieState");

	Params::UFortHoagieVehicle_OnRep_HoagieState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoagieRuntime.FortHoagieVehicle.OnRep_ControlState
// (Final, Native, Private)
// Parameters:

void UFortHoagieVehicle::OnRep_ControlState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRep_ControlState");

	Params::UFortHoagieVehicle_OnRep_ControlState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty
// (Final, Native, Protected)
// Parameters:

void UFortHoagieVehicle::OnRefueledFromEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRefueledFromEmpty");

	Params::UFortHoagieVehicle_OnRefueledFromEmpty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHoagieVehicle::OnImpactWhileCritical()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnImpactWhileCritical");

	Params::UFortHoagieVehicle_OnImpactWhileCritical_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     HitLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::OnImpactOtherHoagie(struct FVector& HitLocation, struct FVector& NormalImpulse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnImpactOtherHoagie");

	Params::UFortHoagieVehicle_OnImpactOtherHoagie_Params Parms{};

	Parms.HitLocation = HitLocation;
	Parms.NormalImpulse = NormalImpulse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnCritRotor
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ImpactLocation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 DamageInstigator                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMainRotor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::OnCritRotor(float Damage, struct FVector& ImpactLocation, class UController* DamageInstigator, class UActor* DamageCauser, bool bMainRotor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnCritRotor");

	Params::UFortHoagieVehicle_OnCritRotor_Params Parms{};

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

void UFortHoagieVehicle::OnBoostStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostStarted");

	Params::UFortHoagieVehicle_OnBoostStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHoagieVehicle::OnBoostReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostReady");

	Params::UFortHoagieVehicle_OnBoostReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHoagieVehicle::OnBoostFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostFinished");

	Params::UFortHoagieVehicle_OnBoostFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHoagieVehicle::OnBoostFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostFailed");

	Params::UFortHoagieVehicle_OnBoostFailed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse
// (Net, NetReliable, Native, Event, NetMulticast, Protected, BlueprintCallable)
// Parameters:
// struct FHitResult                  RotorHit                                                         (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::MulticastRotorImpulse(struct FHitResult& RotorHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "MulticastRotorImpulse");

	Params::UFortHoagieVehicle_MulticastRotorImpulse_Params Parms{};

	Parms.RotorHit = RotorHit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoagieRuntime.FortHoagieVehicle.IsStartingUp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHoagieVehicle::IsStartingUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "IsStartingUp");

	Params::UFortHoagieVehicle_IsStartingUp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.IsShuttingDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHoagieVehicle::IsShuttingDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "IsShuttingDown");

	Params::UFortHoagieVehicle_IsShuttingDown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.IsScrapingBottom
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHoagieVehicle::IsScrapingBottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "IsScrapingBottom");

	Params::UFortHoagieVehicle_IsScrapingBottom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.HoagieOnDisabledChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bDisabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicle::HoagieOnDisabledChanged(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "HoagieOnDisabledChanged");

	Params::UFortHoagieVehicle_HoagieOnDisabledChanged_Params Parms{};

	Parms.bDisabled = bDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetVerticalSpeedKmh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetVerticalSpeedKmh");

	Params::UFortHoagieVehicle_GetVerticalSpeedKmh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetThrustDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bWorldSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortHoagieVehicle::GetThrustDirection(bool bWorldSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetThrustDirection");

	Params::UFortHoagieVehicle_GetThrustDirection_Params Parms{};

	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetStrafeAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetStrafeAlpha");

	Params::UFortHoagieVehicle_GetStrafeAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetSteerAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetSteerAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetSteerAlpha");

	Params::UFortHoagieVehicle_GetSteerAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetShutdownTimeLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetShutdownTimeLeft");

	Params::UFortHoagieVehicle_GetShutdownTimeLeft_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetRotorSpeedPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorSpeedPercent");

	Params::UFortHoagieVehicle_GetRotorSpeedPercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetRotorSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorSpeed");

	Params::UFortHoagieVehicle_GetRotorSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortHoagieVehicle::GetRotorCenterPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorCenterPosition");

	Params::UFortHoagieVehicle_GetRotorCenterPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetRotorAngleDegrees()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorAngleDegrees");

	Params::UFortHoagieVehicle_GetRotorAngleDegrees_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetMaxBoostCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetMaxBoostCooldown");

	Params::UFortHoagieVehicle_GetMaxBoostCooldown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetMaxAltitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetMaxAltitude()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetMaxAltitude");

	Params::UFortHoagieVehicle_GetMaxAltitude_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetLiftAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetLiftAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetLiftAlpha");

	Params::UFortHoagieVehicle_GetLiftAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetIsEngineOn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHoagieVehicle::GetIsEngineOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetIsEngineOn");

	Params::UFortHoagieVehicle_GetIsEngineOn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetForwardAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetForwardAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetForwardAlpha");

	Params::UFortHoagieVehicle_GetForwardAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetDistanceToGround
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetDistanceToGround()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetDistanceToGround");

	Params::UFortHoagieVehicle_GetDistanceToGround_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetBoostTimeLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostTimeLeft");

	Params::UFortHoagieVehicle_GetBoostTimeLeft_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetBoostDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostDuration");

	Params::UFortHoagieVehicle_GetBoostDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortHoagieVehicle::GetBoostDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostDirection");

	Params::UFortHoagieVehicle_GetBoostDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetBoostCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostCooldown");

	Params::UFortHoagieVehicle_GetBoostCooldown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoagieRuntime.FortHoagieVehicle.GetAltitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortHoagieVehicle::GetAltitude()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicle", "GetAltitude");

	Params::UFortHoagieVehicle_GetAltitude_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HoagieRuntime.FortHoagieVehicleConfigs
// (None)

class UClass* UFortHoagieVehicleConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHoagieVehicleConfigs");

	return Clss;
}


// FortHoagieVehicleConfigs HoagieRuntime.Default__FortHoagieVehicleConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHoagieVehicleConfigs* UFortHoagieVehicleConfigs::GetDefaultObj()
{
	static class UFortHoagieVehicleConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHoagieVehicleConfigs*>(UFortHoagieVehicleConfigs::StaticClass()->DefaultObject);

	return Default;
}

}


