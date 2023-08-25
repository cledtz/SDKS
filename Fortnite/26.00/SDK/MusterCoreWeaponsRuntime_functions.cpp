#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile
// (Actor)

class UClass* UFortMusterExplosiveARProjectile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMusterExplosiveARProjectile");

	return Clss;
}


// FortMusterExplosiveARProjectile MusterCoreWeaponsRuntime.Default__FortMusterExplosiveARProjectile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMusterExplosiveARProjectile* UFortMusterExplosiveARProjectile::GetDefaultObj()
{
	static class UFortMusterExplosiveARProjectile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMusterExplosiveARProjectile*>(UFortMusterExplosiveARProjectile::StaticClass()->DefaultObject);

	return Default;
}


// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitRotation
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    NewHitRotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortMusterExplosiveARProjectile::SetHitRotation(struct FRotator& NewHitRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMusterExplosiveARProjectile", "SetHitRotation");

	Params::UFortMusterExplosiveARProjectile_SetHitRotation_Params Parms{};

	Parms.NewHitRotation = NewHitRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bWasHit                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMusterExplosiveARProjectile::SetHitPlayer(bool bWasHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMusterExplosiveARProjectile", "SetHitPlayer");

	Params::UFortMusterExplosiveARProjectile_SetHitPlayer_Params Parms{};

	Parms.bWasHit = bWasHit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitLocation
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewHitLocation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMusterExplosiveARProjectile::SetHitLocation(struct FVector& NewHitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMusterExplosiveARProjectile", "SetHitLocation");

	Params::UFortMusterExplosiveARProjectile_SetHitLocation_Params Parms{};

	Parms.NewHitLocation = NewHitLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.OnRep_HitLocation
// (Final, Native, Protected)
// Parameters:

void UFortMusterExplosiveARProjectile::OnRep_HitLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMusterExplosiveARProjectile", "OnRep_HitLocation");

	Params::UFortMusterExplosiveARProjectile_OnRep_HitLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance
// (None)

class UClass* UMusterCoreWeaponsAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MusterCoreWeaponsAnimInstance");

	return Clss;
}


// MusterCoreWeaponsAnimInstance MusterCoreWeaponsRuntime.Default__MusterCoreWeaponsAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UMusterCoreWeaponsAnimInstance* UMusterCoreWeaponsAnimInstance::GetDefaultObj()
{
	static class UMusterCoreWeaponsAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UMusterCoreWeaponsAnimInstance*>(UMusterCoreWeaponsAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class MusterCoreWeaponsRuntime.FortExCaliberProjectile
// (Actor)

class UClass* UFortExCaliberProjectile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExCaliberProjectile");

	return Clss;
}


// FortExCaliberProjectile MusterCoreWeaponsRuntime.Default__FortExCaliberProjectile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExCaliberProjectile* UFortExCaliberProjectile::GetDefaultObj()
{
	static class UFortExCaliberProjectile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExCaliberProjectile*>(UFortExCaliberProjectile::StaticClass()->DefaultObject);

	return Default;
}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.UnblockPawnCollision
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortExCaliberProjectile::UnblockPawnCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "UnblockPawnCollision");

	Params::UFortExCaliberProjectile_UnblockPawnCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.TriggerExplosion
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortExCaliberProjectile::TriggerExplosion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "TriggerExplosion");

	Params::UFortExCaliberProjectile_TriggerExplosion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupSwordRevealEffects
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*        ProjectileMesh                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SwordRevealAlpha                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ColorChangeAlpha                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HDRMultiplierAlpha                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExCaliberProjectile::SetupSwordRevealEffects(class UStaticMeshComponent* ProjectileMesh, float SwordRevealAlpha, float ColorChangeAlpha, float HDRMultiplierAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "SetupSwordRevealEffects");

	Params::UFortExCaliberProjectile_SetupSwordRevealEffects_Params Parms{};

	Parms.ProjectileMesh = ProjectileMesh;
	Parms.SwordRevealAlpha = SwordRevealAlpha;
	Parms.ColorChangeAlpha = ColorChangeAlpha;
	Parms.HDRMultiplierAlpha = HDRMultiplierAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupProjectileHitAudio
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     ProjectileImpactLocation                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      HitActor                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExCaliberProjectile::SetupProjectileHitAudio(struct FVector& ProjectileImpactLocation, class UActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "SetupProjectileHitAudio");

	Params::UFortExCaliberProjectile_SetupProjectileHitAudio_Params Parms{};

	Parms.ProjectileImpactLocation = ProjectileImpactLocation;
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetFuseColorBasedOnTeam
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortExCaliberProjectile::SetFuseColorBasedOnTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "SetFuseColorBasedOnTeam");

	Params::UFortExCaliberProjectile_SetFuseColorBasedOnTeam_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.RestartSimulating
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortExCaliberProjectile::RestartSimulating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "RestartSimulating");

	Params::UFortExCaliberProjectile_RestartSimulating_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.PlayPreExplosionEfffects
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortExCaliberProjectile::PlayPreExplosionEfffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "PlayPreExplosionEfffects");

	Params::UFortExCaliberProjectile_PlayPreExplosionEfffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnRep_bSimulationRunning
// (Final, Native, Protected)
// Parameters:

void UFortExCaliberProjectile::OnRep_bSimulationRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "OnRep_bSimulationRunning");

	Params::UFortExCaliberProjectile_OnRep_bSimulationRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedBuildingDestroyed
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExCaliberProjectile::OnAttachedBuildingDestroyed(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "OnAttachedBuildingDestroyed");

	Params::UFortExCaliberProjectile_OnAttachedBuildingDestroyed_Params Parms{};

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


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedActorDestroyed
// (Final, Native, Protected)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExCaliberProjectile::OnAttachedActorDestroyed(class UActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "OnAttachedActorDestroyed");

	Params::UFortExCaliberProjectile_OnAttachedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.BP_OnProjectileStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortExCaliberProjectile::BP_OnProjectileStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExCaliberProjectile", "BP_OnProjectileStopped");

	Params::UFortExCaliberProjectile_BP_OnProjectileStopped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


