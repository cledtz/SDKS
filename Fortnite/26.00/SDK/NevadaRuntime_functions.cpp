#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NevadaRuntime.FortNevadaVehicle
// (Actor, Pawn)

class UClass* UFortNevadaVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNevadaVehicle");

	return Clss;
}


// FortNevadaVehicle NevadaRuntime.Default__FortNevadaVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNevadaVehicle* UFortNevadaVehicle::GetDefaultObj()
{
	static class UFortNevadaVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNevadaVehicle*>(UFortNevadaVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortNevadaVehicle::SetTractorBeamInactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "SetTractorBeamInactive");

	Params::UFortNevadaVehicle_SetTractorBeamInactive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::SetTractorBeamEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "SetTractorBeamEnabled");

	Params::UFortNevadaVehicle_SetTractorBeamEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.SetCannonEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::SetCannonEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "SetCannonEnabled");

	Params::UFortNevadaVehicle_SetCannonEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     AddedVelocity                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::SetAttachedPawnAddedVelocity(struct FVector& AddedVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "SetAttachedPawnAddedVelocity");

	Params::UFortNevadaVehicle_SetAttachedPawnAddedVelocity_Params Parms{};

	Parms.AddedVelocity = AddedVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UActor*                      DetachedActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LastBeamPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnTractorBeamDetached(class UActor* DetachedActor, struct FVector& LastBeamPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamDetached");

	Params::UFortNevadaVehicle_OnTractorBeamDetached_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamDeactivated");

	Params::UFortNevadaVehicle_OnTractorBeamDeactivated_Params Parms{};

	Parms.LastBeamPosition = LastBeamPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnTractorBeamChargeStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamChargeStarted");

	Params::UFortNevadaVehicle_OnTractorBeamChargeStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnTractorBeamAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamAttached");

	Params::UFortNevadaVehicle_OnTractorBeamAttached_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnTractorBeamActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamActivated");

	Params::UFortNevadaVehicle_OnTractorBeamActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      NewTargetedActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnTargetedActorChanged(class UActor* NewTargetedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTargetedActorChanged");

	Params::UFortNevadaVehicle_OnTargetedActorChanged_Params Parms{};

	Parms.NewTargetedActor = NewTargetedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnStartDescend
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnStartDescend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnStartDescend");

	Params::UFortNevadaVehicle_OnStartDescend_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnStartAscend
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnStartAscend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnStartAscend");

	Params::UFortNevadaVehicle_OnStartAscend_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState
// (Final, Native, Protected)
// Parameters:
// enum class ETractorBeamState       PreviousState                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnRep_TractorBeamState(enum class ETractorBeamState PreviousState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamState");

	Params::UFortNevadaVehicle_OnRep_TractorBeamState_Params Parms{};

	Parms.PreviousState = PreviousState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted
// (Final, Native, Public)
// Parameters:

void UFortNevadaVehicle::OnRep_TractorBeamChargeStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamChargeStarted");

	Params::UFortNevadaVehicle_OnRep_TractorBeamChargeStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached
// (Final, Native, Protected)
// Parameters:

void UFortNevadaVehicle::OnRep_TractorBeamAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamAttached");

	Params::UFortNevadaVehicle_OnRep_TractorBeamAttached_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged
// (Final, Native, Public)
// Parameters:

void UFortNevadaVehicle::OnRep_TargetedActorChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TargetedActorChanged");

	Params::UFortNevadaVehicle_OnRep_TargetedActorChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors
// (Final, Native, Public)
// Parameters:

void UFortNevadaVehicle::OnRep_ReplicatedTargetedActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_ReplicatedTargetedActors");

	Params::UFortNevadaVehicle_OnRep_ReplicatedTargetedActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FNevadaState                PrevState                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnRep_NevadaState(struct FNevadaState& PrevState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_NevadaState");

	Params::UFortNevadaVehicle_OnRep_NevadaState_Params Parms{};

	Parms.PrevState = PrevState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRebootStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnRebootStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRebootStarted");

	Params::UFortNevadaVehicle_OnRebootStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnRebootFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnRebootFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRebootFinished");

	Params::UFortNevadaVehicle_OnRebootFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnOutOfBattery
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnOutOfBattery()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnOutOfBattery");

	Params::UFortNevadaVehicle_OnOutOfBattery_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnNewVehicleState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ENevadaFlightStates     NewVehicleState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnNewVehicleState(enum class ENevadaFlightStates NewVehicleState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnNewVehicleState");

	Params::UFortNevadaVehicle_OnNewVehicleState_Params Parms{};

	Parms.NewVehicleState = NewVehicleState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnCrashingStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnCrashingStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnCrashingStarted");

	Params::UFortNevadaVehicle_OnCrashingStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnCrashedImpact
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnCrashedImpact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnCrashedImpact");

	Params::UFortNevadaVehicle_OnCrashedImpact_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnBoostStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBoostStarted");

	Params::UFortNevadaVehicle_OnBoostStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnBoostFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBoostFinished");

	Params::UFortNevadaVehicle_OnBoostFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaVehicle::OnBoostChargeRefilled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBoostChargeRefilled");

	Params::UFortNevadaVehicle_OnBoostChargeRefilled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBatteryRegen
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Newcharge                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnBatteryRegen(float Newcharge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBatteryRegen");

	Params::UFortNevadaVehicle_OnBatteryRegen_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnAttachedActorDied");

	Params::UFortNevadaVehicle_OnAttachedActorDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::OnAttachedActorDestroyed(class UActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnAttachedActorDestroyed");

	Params::UFortNevadaVehicle_OnAttachedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::NativeToggleCockpit(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "NativeToggleCockpit");

	Params::UFortNevadaVehicle_NativeToggleCockpit_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortNevadaVehicle::IsTractorBeamDisrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamDisrupted");

	Params::UFortNevadaVehicle_IsTractorBeamDisrupted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortNevadaVehicle::IsTractorBeamAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamAttached");

	Params::UFortNevadaVehicle_IsTractorBeamAttached_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortNevadaVehicle::IsTractorBeamActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamActive");

	Params::UFortNevadaVehicle_IsTractorBeamActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortNevadaVehicle::GetTractorBeamAttachLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetTractorBeamAttachLocation");

	Params::UFortNevadaVehicle_GetTractorBeamAttachLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortNevadaVehicle::GetNumRebootsAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetNumRebootsAvailable");

	Params::UFortNevadaVehicle_GetNumRebootsAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortNevadaVehicle::GetEnergyCanonChargePercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetEnergyCanonChargePercent");

	Params::UFortNevadaVehicle_GetEnergyCanonChargePercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OutLeftRight                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutForwardBack                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::GetDriverSeatRotationAnimParams(float* OutLeftRight, float* OutForwardBack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetDriverSeatRotationAnimParams");

	Params::UFortNevadaVehicle_GetDriverSeatRotationAnimParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetCurrentVehicleState");

	Params::UFortNevadaVehicle_GetCurrentVehicleState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortNevadaVehicle::GetBoostChargeTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargeTimeRemaining");

	Params::UFortNevadaVehicle_GetBoostChargeTimeRemaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortNevadaVehicle::GetBoostChargesAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargesAvailable");

	Params::UFortNevadaVehicle_GetBoostChargesAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortNevadaVehicle::GetBoostChargeProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargeProgress");

	Params::UFortNevadaVehicle_GetBoostChargeProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBatteryCharge
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortNevadaVehicle::GetBatteryCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBatteryCharge");

	Params::UFortNevadaVehicle_GetBatteryCharge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetAudioController
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortNevadaAudioController*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortNevadaAudioController* UFortNevadaVehicle::GetAudioController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetAudioController");

	Params::UFortNevadaVehicle_GetAudioController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bNewCollisionEnabled                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "EnablePilotBubbleCollisionOnServer");

	Params::UFortNevadaVehicle_EnablePilotBubbleCollisionOnServer_Params Parms{};

	Parms.bNewCollisionEnabled = bNewCollisionEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortNevadaVehicle::DisruptTractorBeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "DisruptTractorBeam");

	Params::UFortNevadaVehicle_DisruptTractorBeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Impulse                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVelChange                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicle::AddPhysicsImpulseToTractorBeamAttachedActor(struct FVector& Impulse, class FName BoneName, bool bVelChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "AddPhysicsImpulseToTractorBeamAttachedActor");

	Params::UFortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor_Params Parms{};

	Parms.Impulse = Impulse;
	Parms.BoneName = BoneName;
	Parms.bVelChange = bVelChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NevadaRuntime.FortNevadaVehicleAnimInstance
// (None)

class UClass* UFortNevadaVehicleAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNevadaVehicleAnimInstance");

	return Clss;
}


// FortNevadaVehicleAnimInstance NevadaRuntime.Default__FortNevadaVehicleAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNevadaVehicleAnimInstance* UFortNevadaVehicleAnimInstance::GetDefaultObj()
{
	static class UFortNevadaVehicleAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNevadaVehicleAnimInstance*>(UFortNevadaVehicleAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
// (None)

class UClass* UFortPlayerAnimInstance_NevadaDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAnimInstance_NevadaDriver");

	return Clss;
}


// FortPlayerAnimInstance_NevadaDriver NevadaRuntime.Default__FortPlayerAnimInstance_NevadaDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAnimInstance_NevadaDriver* UFortPlayerAnimInstance_NevadaDriver::GetDefaultObj()
{
	static class UFortPlayerAnimInstance_NevadaDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAnimInstance_NevadaDriver*>(UFortPlayerAnimInstance_NevadaDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class NevadaRuntime.FortCameraMode_Nevada
// (None)

class UClass* UFortCameraMode_Nevada::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCameraMode_Nevada");

	return Clss;
}


// FortCameraMode_Nevada NevadaRuntime.Default__FortCameraMode_Nevada
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCameraMode_Nevada* UFortCameraMode_Nevada::GetDefaultObj()
{
	static class UFortCameraMode_Nevada* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCameraMode_Nevada*>(UFortCameraMode_Nevada::StaticClass()->DefaultObject);

	return Default;
}


// Class NevadaRuntime.FortNevadaAudioController
// (Actor)

class UClass* UFortNevadaAudioController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNevadaAudioController");

	return Clss;
}


// FortNevadaAudioController NevadaRuntime.Default__FortNevadaAudioController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNevadaAudioController* UFortNevadaAudioController::GetDefaultObj()
{
	static class UFortNevadaAudioController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNevadaAudioController*>(UFortNevadaAudioController::StaticClass()->DefaultObject);

	return Default;
}


// Function NevadaRuntime.FortNevadaAudioController.Update
// (Final, Native, Public)
// Parameters:

void UFortNevadaAudioController::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "Update");

	Params::UFortNevadaAudioController_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaAudioController.Init
// (Final, Native, Public)
// Parameters:
// class UFortNevadaVehicle*          InVehicle                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaAudioController::Init(class UFortNevadaVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "Init");

	Params::UFortNevadaAudioController_Init_Params Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaAudioController.GetVehicleActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortNevadaVehicle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortNevadaVehicle* UFortNevadaAudioController::GetVehicleActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "GetVehicleActor");

	Params::UFortNevadaAudioController_GetVehicleActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaAudioController.CacheReferences
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLayeredAudioComponent*  InLayeredAudioComponent                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaAudioController::CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "CacheReferences");

	Params::UFortNevadaAudioController_CacheReferences_Params Parms{};

	Parms.InLayeredAudioComponent = InLayeredAudioComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaAudioController.BP_Update
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaAudioController::BP_Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "BP_Update");

	Params::UFortNevadaAudioController_BP_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaAudioController.BP_Init
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortNevadaAudioController::BP_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "BP_Init");

	Params::UFortNevadaAudioController_BP_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class NevadaRuntime.FortNevadaVehicleConfigs
// (None)

class UClass* UFortNevadaVehicleConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNevadaVehicleConfigs");

	return Clss;
}


// FortNevadaVehicleConfigs NevadaRuntime.Default__FortNevadaVehicleConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNevadaVehicleConfigs* UFortNevadaVehicleConfigs::GetDefaultObj()
{
	static class UFortNevadaVehicleConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNevadaVehicleConfigs*>(UFortNevadaVehicleConfigs::StaticClass()->DefaultObject);

	return Default;
}

}


