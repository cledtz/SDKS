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


// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitRotation
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    NewHitRotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void AFortMusterExplosiveARProjectile::SetHitRotation(struct FRotator& NewHitRotation)
{
	static auto Func = Class->GetFunction("FortMusterExplosiveARProjectile", "SetHitRotation");

	Params::AFortMusterExplosiveARProjectile_SetHitRotation_Params Parms;

	Parms.NewHitRotation = NewHitRotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bWasHit                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMusterExplosiveARProjectile::SetHitPlayer(bool bWasHit)
{
	static auto Func = Class->GetFunction("FortMusterExplosiveARProjectile", "SetHitPlayer");

	Params::AFortMusterExplosiveARProjectile_SetHitPlayer_Params Parms;

	Parms.bWasHit = bWasHit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitLocation
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewHitLocation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMusterExplosiveARProjectile::SetHitLocation(struct FVector& NewHitLocation)
{
	static auto Func = Class->GetFunction("FortMusterExplosiveARProjectile", "SetHitLocation");

	Params::AFortMusterExplosiveARProjectile_SetHitLocation_Params Parms;

	Parms.NewHitLocation = NewHitLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.OnRep_HitLocation
// (Final, Native, Protected)
// Parameters:

void AFortMusterExplosiveARProjectile::OnRep_HitLocation()
{
	static auto Func = Class->GetFunction("FortMusterExplosiveARProjectile", "OnRep_HitLocation");

	Params::AFortMusterExplosiveARProjectile_OnRep_HitLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.UnblockPawnCollision
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortExCaliberProjectile::UnblockPawnCollision()
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "UnblockPawnCollision");

	Params::AFortExCaliberProjectile_UnblockPawnCollision_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.TriggerExplosion
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFortExCaliberProjectile::TriggerExplosion()
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "TriggerExplosion");

	Params::AFortExCaliberProjectile_TriggerExplosion_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupSwordRevealEffects
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*        ProjectileMesh                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SwordRevealAlpha                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ColorChangeAlpha                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HDRMultiplierAlpha                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortExCaliberProjectile::SetupSwordRevealEffects(class UStaticMeshComponent* ProjectileMesh, float SwordRevealAlpha, float ColorChangeAlpha, float HDRMultiplierAlpha)
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "SetupSwordRevealEffects");

	Params::AFortExCaliberProjectile_SetupSwordRevealEffects_Params Parms;

	Parms.ProjectileMesh = ProjectileMesh;
	Parms.SwordRevealAlpha = SwordRevealAlpha;
	Parms.ColorChangeAlpha = ColorChangeAlpha;
	Parms.HDRMultiplierAlpha = HDRMultiplierAlpha;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupProjectileHitAudio
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     ProjectileImpactLocation                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      HitActor                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortExCaliberProjectile::SetupProjectileHitAudio(struct FVector& ProjectileImpactLocation, class AActor* HitActor)
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "SetupProjectileHitAudio");

	Params::AFortExCaliberProjectile_SetupProjectileHitAudio_Params Parms;

	Parms.ProjectileImpactLocation = ProjectileImpactLocation;
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetFuseColorBasedOnTeam
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortExCaliberProjectile::SetFuseColorBasedOnTeam()
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "SetFuseColorBasedOnTeam");

	Params::AFortExCaliberProjectile_SetFuseColorBasedOnTeam_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.RestartSimulating
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AFortExCaliberProjectile::RestartSimulating()
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "RestartSimulating");

	Params::AFortExCaliberProjectile_RestartSimulating_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.PlayPreExplosionEfffects
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFortExCaliberProjectile::PlayPreExplosionEfffects()
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "PlayPreExplosionEfffects");

	Params::AFortExCaliberProjectile_PlayPreExplosionEfffects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnRep_bSimulationRunning
// (Final, Native, Protected)
// Parameters:

void AFortExCaliberProjectile::OnRep_bSimulationRunning()
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "OnRep_bSimulationRunning");

	Params::AFortExCaliberProjectile_OnRep_bSimulationRunning_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedBuildingDestroyed
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortExCaliberProjectile::OnAttachedBuildingDestroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "OnAttachedBuildingDestroyed");

	Params::AFortExCaliberProjectile_OnAttachedBuildingDestroyed_Params Parms;

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


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedActorDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortExCaliberProjectile::OnAttachedActorDestroyed(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "OnAttachedActorDestroyed");

	Params::AFortExCaliberProjectile_OnAttachedActorDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.BP_OnProjectileStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortExCaliberProjectile::BP_OnProjectileStopped()
{
	static auto Func = Class->GetFunction("FortExCaliberProjectile", "BP_OnProjectileStopped");

	Params::AFortExCaliberProjectile_BP_OnProjectileStopped_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
