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


// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AFortNevadaVehicle::SetTractorBeamInactive()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "SetTractorBeamInactive");

	Params::AFortNevadaVehicle_SetTractorBeamInactive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::SetTractorBeamEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "SetTractorBeamEnabled");

	Params::AFortNevadaVehicle_SetTractorBeamEnabled_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.SetCannonEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::SetCannonEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "SetCannonEnabled");

	Params::AFortNevadaVehicle_SetCannonEnabled_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     AddedVelocity                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::SetAttachedPawnAddedVelocity(struct FVector& AddedVelocity)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "SetAttachedPawnAddedVelocity");

	Params::AFortNevadaVehicle_SetAttachedPawnAddedVelocity_Params Parms;

	Parms.AddedVelocity = AddedVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                      DetachedActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LastBeamPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnTractorBeamDetached(class AActor* DetachedActor, struct FVector& LastBeamPosition)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamDetached");

	Params::AFortNevadaVehicle_OnTractorBeamDetached_Params Parms;

	Parms.DetachedActor = DetachedActor;
	Parms.LastBeamPosition = LastBeamPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     LastBeamPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnTractorBeamDeactivated(struct FVector& LastBeamPosition)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamDeactivated");

	Params::AFortNevadaVehicle_OnTractorBeamDeactivated_Params Parms;

	Parms.LastBeamPosition = LastBeamPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnTractorBeamChargeStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamChargeStarted");

	Params::AFortNevadaVehicle_OnTractorBeamChargeStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnTractorBeamAttached()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamAttached");

	Params::AFortNevadaVehicle_OnTractorBeamAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnTractorBeamActivated()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamActivated");

	Params::AFortNevadaVehicle_OnTractorBeamActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      NewTargetedActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnTargetedActorChanged(class AActor* NewTargetedActor)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTargetedActorChanged");

	Params::AFortNevadaVehicle_OnTargetedActorChanged_Params Parms;

	Parms.NewTargetedActor = NewTargetedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnStartDescend
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnStartDescend()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnStartDescend");

	Params::AFortNevadaVehicle_OnStartDescend_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnStartAscend
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnStartAscend()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnStartAscend");

	Params::AFortNevadaVehicle_OnStartAscend_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState
// (Final, Native, Protected)
// Parameters:
// enum class ETractorBeamState       PreviousState                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnRep_TractorBeamState(enum class ETractorBeamState PreviousState)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamState");

	Params::AFortNevadaVehicle_OnRep_TractorBeamState_Params Parms;

	Parms.PreviousState = PreviousState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted
// (Final, Native, Public)
// Parameters:

void AFortNevadaVehicle::OnRep_TractorBeamChargeStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamChargeStarted");

	Params::AFortNevadaVehicle_OnRep_TractorBeamChargeStarted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached
// (Final, Native, Protected)
// Parameters:

void AFortNevadaVehicle::OnRep_TractorBeamAttached()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamAttached");

	Params::AFortNevadaVehicle_OnRep_TractorBeamAttached_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged
// (Final, Native, Public)
// Parameters:

void AFortNevadaVehicle::OnRep_TargetedActorChanged()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TargetedActorChanged");

	Params::AFortNevadaVehicle_OnRep_TargetedActorChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors
// (Final, Native, Public)
// Parameters:

void AFortNevadaVehicle::OnRep_ReplicatedTargetedActors()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_ReplicatedTargetedActors");

	Params::AFortNevadaVehicle_OnRep_ReplicatedTargetedActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FNevadaState                PrevState                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnRep_NevadaState(struct FNevadaState& PrevState)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_NevadaState");

	Params::AFortNevadaVehicle_OnRep_NevadaState_Params Parms;

	Parms.PrevState = PrevState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRebootStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnRebootStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRebootStarted");

	Params::AFortNevadaVehicle_OnRebootStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnRebootFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnRebootFinished()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRebootFinished");

	Params::AFortNevadaVehicle_OnRebootFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnOutOfBattery
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnOutOfBattery()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnOutOfBattery");

	Params::AFortNevadaVehicle_OnOutOfBattery_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnNewVehicleState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ENevadaFlightStates     NewVehicleState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnNewVehicleState(enum class ENevadaFlightStates NewVehicleState)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnNewVehicleState");

	Params::AFortNevadaVehicle_OnNewVehicleState_Params Parms;

	Parms.NewVehicleState = NewVehicleState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnCrashingStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnCrashingStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnCrashingStarted");

	Params::AFortNevadaVehicle_OnCrashingStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnCrashedImpact
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnCrashedImpact()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnCrashedImpact");

	Params::AFortNevadaVehicle_OnCrashedImpact_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnBoostStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnBoostStarted");

	Params::AFortNevadaVehicle_OnBoostStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnBoostFinished()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnBoostFinished");

	Params::AFortNevadaVehicle_OnBoostFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnBoostChargeRefilled()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnBoostChargeRefilled");

	Params::AFortNevadaVehicle_OnBoostChargeRefilled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBatteryRegen
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Newcharge                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnBatteryRegen(float Newcharge)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnBatteryRegen");

	Params::AFortNevadaVehicle_OnBatteryRegen_Params Parms;

	Parms.Newcharge = Newcharge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnAttachedActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnAttachedActorDied");

	Params::AFortNevadaVehicle_OnAttachedActorDied_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnAttachedActorDestroyed(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnAttachedActorDestroyed");

	Params::AFortNevadaVehicle_OnAttachedActorDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::NativeToggleCockpit(bool bEnable)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "NativeToggleCockpit");

	Params::AFortNevadaVehicle_NativeToggleCockpit_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortNevadaVehicle::IsTractorBeamDisrupted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamDisrupted");

	Params::AFortNevadaVehicle_IsTractorBeamDisrupted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortNevadaVehicle::IsTractorBeamAttached()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamAttached");

	Params::AFortNevadaVehicle_IsTractorBeamAttached_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortNevadaVehicle::IsTractorBeamActive()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamActive");

	Params::AFortNevadaVehicle_IsTractorBeamActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortNevadaVehicle::GetTractorBeamAttachLocation()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetTractorBeamAttachLocation");

	Params::AFortNevadaVehicle_GetTractorBeamAttachLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortNevadaVehicle::GetNumRebootsAvailable()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetNumRebootsAvailable");

	Params::AFortNevadaVehicle_GetNumRebootsAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortNevadaVehicle::GetEnergyCanonChargePercent()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetEnergyCanonChargePercent");

	Params::AFortNevadaVehicle_GetEnergyCanonChargePercent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OutLeftRight                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutForwardBack                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::GetDriverSeatRotationAnimParams(float* OutLeftRight, float* OutForwardBack)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetDriverSeatRotationAnimParams");

	Params::AFortNevadaVehicle_GetDriverSeatRotationAnimParams_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLeftRight != nullptr)
		*OutLeftRight = Parms.OutLeftRight;

	if (OutForwardBack != nullptr)
		*OutForwardBack = Parms.OutForwardBack;

}


// Function NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENevadaFlightStates     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ENevadaFlightStates AFortNevadaVehicle::GetCurrentVehicleState()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetCurrentVehicleState");

	Params::AFortNevadaVehicle_GetCurrentVehicleState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortNevadaVehicle::GetBoostChargeTimeRemaining()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargeTimeRemaining");

	Params::AFortNevadaVehicle_GetBoostChargeTimeRemaining_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortNevadaVehicle::GetBoostChargesAvailable()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargesAvailable");

	Params::AFortNevadaVehicle_GetBoostChargesAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortNevadaVehicle::GetBoostChargeProgress()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargeProgress");

	Params::AFortNevadaVehicle_GetBoostChargeProgress_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBatteryCharge
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortNevadaVehicle::GetBatteryCharge()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetBatteryCharge");

	Params::AFortNevadaVehicle_GetBatteryCharge_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetAudioController
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortNevadaAudioController*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortNevadaAudioController* AFortNevadaVehicle::GetAudioController()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetAudioController");

	Params::AFortNevadaVehicle_GetAudioController_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bNewCollisionEnabled                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "EnablePilotBubbleCollisionOnServer");

	Params::AFortNevadaVehicle_EnablePilotBubbleCollisionOnServer_Params Parms;

	Parms.bNewCollisionEnabled = bNewCollisionEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AFortNevadaVehicle::DisruptTractorBeam()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "DisruptTractorBeam");

	Params::AFortNevadaVehicle_DisruptTractorBeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Impulse                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVelChange                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::AddPhysicsImpulseToTractorBeamAttachedActor(struct FVector& Impulse, class FName BoneName, bool bVelChange)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "AddPhysicsImpulseToTractorBeamAttachedActor");

	Params::AFortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor_Params Parms;

	Parms.Impulse = Impulse;
	Parms.BoneName = BoneName;
	Parms.bVelChange = bVelChange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaAudioController.Update
// (Final, Native, Public)
// Parameters:

void AFortNevadaAudioController::Update()
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "Update");

	Params::AFortNevadaAudioController_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaAudioController.Init
// (Final, Native, Public)
// Parameters:
// class AFortNevadaVehicle*          InVehicle                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaAudioController::Init(class AFortNevadaVehicle* InVehicle)
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "Init");

	Params::AFortNevadaAudioController_Init_Params Parms;

	Parms.InVehicle = InVehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaAudioController.GetVehicleActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortNevadaVehicle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortNevadaVehicle* AFortNevadaAudioController::GetVehicleActor()
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "GetVehicleActor");

	Params::AFortNevadaAudioController_GetVehicleActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaAudioController.CacheReferences
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLayeredAudioComponent*  InLayeredAudioComponent                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaAudioController::CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent)
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "CacheReferences");

	Params::AFortNevadaAudioController_CacheReferences_Params Parms;

	Parms.InLayeredAudioComponent = InLayeredAudioComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaAudioController.BP_Update
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaAudioController::BP_Update()
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "BP_Update");

	Params::AFortNevadaAudioController_BP_Update_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaAudioController.BP_Init
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaAudioController::BP_Init()
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "BP_Init");

	Params::AFortNevadaAudioController_BP_Init_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
