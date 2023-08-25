#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LabradorRuntime.FortAIFaunaAnimInstance_Labrador
// (None)

class UClass* UFortAIFaunaAnimInstance_Labrador::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance_Labrador");

	return Clss;
}


// FortAIFaunaAnimInstance_Labrador LabradorRuntime.Default__FortAIFaunaAnimInstance_Labrador
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance_Labrador* UFortAIFaunaAnimInstance_Labrador::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance_Labrador* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance_Labrador*>(UFortAIFaunaAnimInstance_Labrador::StaticClass()->DefaultObject);

	return Default;
}


// Class LabradorRuntime.FortLabradorComponent_Telemetry
// (None)

class UClass* UFortLabradorComponent_Telemetry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLabradorComponent_Telemetry");

	return Clss;
}


// FortLabradorComponent_Telemetry LabradorRuntime.Default__FortLabradorComponent_Telemetry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLabradorComponent_Telemetry* UFortLabradorComponent_Telemetry::GetDefaultObj()
{
	static class UFortLabradorComponent_Telemetry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLabradorComponent_Telemetry*>(UFortLabradorComponent_Telemetry::StaticClass()->DefaultObject);

	return Default;
}


// Function LabradorRuntime.FortLabradorComponent_Telemetry.OnWakeUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLabradorComponent_Telemetry::OnWakeUp(class UActor* GoalActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLabradorComponent_Telemetry", "OnWakeUp");

	Params::UFortLabradorComponent_Telemetry_OnWakeUp_Params Parms{};

	Parms.GoalActor = GoalActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LabradorRuntime.FortLabradorComponent_Telemetry.OnTeleport
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortLabradorComponent_Telemetry::OnTeleport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLabradorComponent_Telemetry", "OnTeleport");

	Params::UFortLabradorComponent_Telemetry_OnTeleport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LabradorRuntime.FortLabradorComponent_Telemetry.OnDamaged
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLabradorComponent_Telemetry::OnDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLabradorComponent_Telemetry", "OnDamaged");

	Params::UFortLabradorComponent_Telemetry_OnDamaged_Params Parms{};

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

}


