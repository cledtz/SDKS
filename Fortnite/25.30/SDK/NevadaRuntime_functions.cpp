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


// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortNevadaVehicle::SetTractorBeamInactive()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "SetTractorBeamInactive");

	Params::UFortNevadaVehicle_SetTractorBeamInactive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::SetTractorBeamEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "SetTractorBeamEnabled");

	Params::UFortNevadaVehicle_SetTractorBeamEnabled_Params Parms;

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

void UFortNevadaVehicle::SetCannonEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "SetCannonEnabled");

	Params::UFortNevadaVehicle_SetCannonEnabled_Params Parms;

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

void UFortNevadaVehicle::SetAttachedPawnAddedVelocity(struct FVector& AddedVelocity)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "SetAttachedPawnAddedVelocity");

	Params::UFortNevadaVehicle_SetAttachedPawnAddedVelocity_Params Parms;

	Parms.AddedVelocity = AddedVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UActor*                      DetachedActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LastBeamPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnTractorBeamDetached(class UActor* DetachedActor, struct FVector& LastBeamPosition)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamDetached");

	Params::UFortNevadaVehicle_OnTractorBeamDetached_Params Parms;

	Parms.DetachedActor = DetachedActor;
	Parms.LastBeamPosition = LastBeamPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     LastBeamPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnTractorBeamDeactivated(struct FVector& LastBeamPosition)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamDeactivated");

	Params::UFortNevadaVehicle_OnTractorBeamDeactivated_Params Parms;

	Parms.LastBeamPosition = LastBeamPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnTractorBeamChargeStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamChargeStarted");

	Params::UFortNevadaVehicle_OnTractorBeamChargeStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnTractorBeamAttached()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamAttached");

	Params::UFortNevadaVehicle_OnTractorBeamAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnTractorBeamActivated()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamActivated");

	Params::UFortNevadaVehicle_OnTractorBeamActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      NewTargetedActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnTargetedActorChanged(class UActor* NewTargetedActor)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnTargetedActorChanged");

	Params::UFortNevadaVehicle_OnTargetedActorChanged_Params Parms;

	Parms.NewTargetedActor = NewTargetedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnStartDescend
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnStartDescend()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnStartDescend");

	Params::UFortNevadaVehicle_OnStartDescend_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnStartAscend
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnStartAscend()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnStartAscend");

	Params::UFortNevadaVehicle_OnStartAscend_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState
// (Final, Native, Protected)
// Parameters:
// enum class ETractorBeamState       PreviousState                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnRep_TractorBeamState(enum class ETractorBeamState PreviousState)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamState");

	Params::UFortNevadaVehicle_OnRep_TractorBeamState_Params Parms;

	Parms.PreviousState = PreviousState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted
// (Final, Native, Public)
// Parameters:

void UFortNevadaVehicle::OnRep_TractorBeamChargeStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamChargeStarted");

	Params::UFortNevadaVehicle_OnRep_TractorBeamChargeStarted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached
// (Final, Native, Protected)
// Parameters:

void UFortNevadaVehicle::OnRep_TractorBeamAttached()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamAttached");

	Params::UFortNevadaVehicle_OnRep_TractorBeamAttached_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged
// (Final, Native, Public)
// Parameters:

void UFortNevadaVehicle::OnRep_TargetedActorChanged()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TargetedActorChanged");

	Params::UFortNevadaVehicle_OnRep_TargetedActorChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors
// (Final, Native, Public)
// Parameters:

void UFortNevadaVehicle::OnRep_ReplicatedTargetedActors()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_ReplicatedTargetedActors");

	Params::UFortNevadaVehicle_OnRep_ReplicatedTargetedActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FNevadaState                PrevState                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnRep_NevadaState(struct FNevadaState& PrevState)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRep_NevadaState");

	Params::UFortNevadaVehicle_OnRep_NevadaState_Params Parms;

	Parms.PrevState = PrevState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRebootStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnRebootStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRebootStarted");

	Params::UFortNevadaVehicle_OnRebootStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnRebootFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnRebootFinished()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnRebootFinished");

	Params::UFortNevadaVehicle_OnRebootFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnOutOfBattery
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnOutOfBattery()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnOutOfBattery");

	Params::UFortNevadaVehicle_OnOutOfBattery_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnNewVehicleState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ENevadaFlightStates     NewVehicleState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnNewVehicleState(enum class ENevadaFlightStates NewVehicleState)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnNewVehicleState");

	Params::UFortNevadaVehicle_OnNewVehicleState_Params Parms;

	Parms.NewVehicleState = NewVehicleState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnCrashingStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnCrashingStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnCrashingStarted");

	Params::UFortNevadaVehicle_OnCrashingStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnCrashedImpact
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnCrashedImpact()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnCrashedImpact");

	Params::UFortNevadaVehicle_OnCrashedImpact_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnBoostStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnBoostStarted");

	Params::UFortNevadaVehicle_OnBoostStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnBoostFinished()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnBoostFinished");

	Params::UFortNevadaVehicle_OnBoostFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnBoostChargeRefilled()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnBoostChargeRefilled");

	Params::UFortNevadaVehicle_OnBoostChargeRefilled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBatteryRegen
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Newcharge                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnBatteryRegen(float Newcharge)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnBatteryRegen");

	Params::UFortNevadaVehicle_OnBatteryRegen_Params Parms;

	Parms.Newcharge = Newcharge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnAttachedActorDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnAttachedActorDied");

	Params::UFortNevadaVehicle_OnAttachedActorDied_Params Parms;

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
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnAttachedActorDestroyed(class UActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "OnAttachedActorDestroyed");

	Params::UFortNevadaVehicle_OnAttachedActorDestroyed_Params Parms;

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

void UFortNevadaVehicle::NativeToggleCockpit(bool bEnable)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "NativeToggleCockpit");

	Params::UFortNevadaVehicle_NativeToggleCockpit_Params Parms;

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

bool UFortNevadaVehicle::IsTractorBeamDisrupted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamDisrupted");

	Params::UFortNevadaVehicle_IsTractorBeamDisrupted_Params Parms;


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

bool UFortNevadaVehicle::IsTractorBeamAttached()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamAttached");

	Params::UFortNevadaVehicle_IsTractorBeamAttached_Params Parms;


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

bool UFortNevadaVehicle::IsTractorBeamActive()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamActive");

	Params::UFortNevadaVehicle_IsTractorBeamActive_Params Parms;


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

struct FVector UFortNevadaVehicle::GetTractorBeamAttachLocation()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetTractorBeamAttachLocation");

	Params::UFortNevadaVehicle_GetTractorBeamAttachLocation_Params Parms;


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

int32 UFortNevadaVehicle::GetNumRebootsAvailable()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetNumRebootsAvailable");

	Params::UFortNevadaVehicle_GetNumRebootsAvailable_Params Parms;


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

float UFortNevadaVehicle::GetEnergyCanonChargePercent()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetEnergyCanonChargePercent");

	Params::UFortNevadaVehicle_GetEnergyCanonChargePercent_Params Parms;


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

void UFortNevadaVehicle::GetDriverSeatRotationAnimParams(float* OutLeftRight, float* OutForwardBack)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetDriverSeatRotationAnimParams");

	Params::UFortNevadaVehicle_GetDriverSeatRotationAnimParams_Params Parms;


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

enum class ENevadaFlightStates UFortNevadaVehicle::GetCurrentVehicleState()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetCurrentVehicleState");

	Params::UFortNevadaVehicle_GetCurrentVehicleState_Params Parms;


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

float UFortNevadaVehicle::GetBoostChargeTimeRemaining()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargeTimeRemaining");

	Params::UFortNevadaVehicle_GetBoostChargeTimeRemaining_Params Parms;


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

int32 UFortNevadaVehicle::GetBoostChargesAvailable()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargesAvailable");

	Params::UFortNevadaVehicle_GetBoostChargesAvailable_Params Parms;


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

float UFortNevadaVehicle::GetBoostChargeProgress()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargeProgress");

	Params::UFortNevadaVehicle_GetBoostChargeProgress_Params Parms;


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

float UFortNevadaVehicle::GetBatteryCharge()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetBatteryCharge");

	Params::UFortNevadaVehicle_GetBatteryCharge_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetAudioController
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortNevadaAudioController*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortNevadaAudioController* UFortNevadaVehicle::GetAudioController()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "GetAudioController");

	Params::UFortNevadaVehicle_GetAudioController_Params Parms;


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

void UFortNevadaVehicle::EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "EnablePilotBubbleCollisionOnServer");

	Params::UFortNevadaVehicle_EnablePilotBubbleCollisionOnServer_Params Parms;

	Parms.bNewCollisionEnabled = bNewCollisionEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortNevadaVehicle::DisruptTractorBeam()
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "DisruptTractorBeam");

	Params::UFortNevadaVehicle_DisruptTractorBeam_Params Parms;


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

void UFortNevadaVehicle::AddPhysicsImpulseToTractorBeamAttachedActor(struct FVector& Impulse, class FName BoneName, bool bVelChange)
{
	static auto Func = Class->GetFunction("FortNevadaVehicle", "AddPhysicsImpulseToTractorBeamAttachedActor");

	Params::UFortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor_Params Parms;

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

void UFortNevadaAudioController::Update()
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "Update");

	Params::UFortNevadaAudioController_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaAudioController.Init
// (Final, Native, Public)
// Parameters:
// class UFortNevadaVehicle*          InVehicle                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaAudioController::Init(class UFortNevadaVehicle* InVehicle)
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "Init");

	Params::UFortNevadaAudioController_Init_Params Parms;

	Parms.InVehicle = InVehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaAudioController.GetVehicleActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortNevadaVehicle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortNevadaVehicle* UFortNevadaAudioController::GetVehicleActor()
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "GetVehicleActor");

	Params::UFortNevadaAudioController_GetVehicleActor_Params Parms;


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

void UFortNevadaAudioController::CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent)
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "CacheReferences");

	Params::UFortNevadaAudioController_CacheReferences_Params Parms;

	Parms.InLayeredAudioComponent = InLayeredAudioComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NevadaRuntime.FortNevadaAudioController.BP_Update
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaAudioController::BP_Update()
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "BP_Update");

	Params::UFortNevadaAudioController_BP_Update_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaAudioController.BP_Init
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaAudioController::BP_Init()
{
	static auto Func = Class->GetFunction("FortNevadaAudioController", "BP_Init");

	Params::UFortNevadaAudioController_BP_Init_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
