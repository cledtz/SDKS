#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitRotation
struct UFortMusterExplosiveARProjectile_SetHitRotation_Params
{
public:
	struct FRotator                              NewHitRotation;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitPlayer
struct UFortMusterExplosiveARProjectile_SetHitPlayer_Params
{
public:
	bool                                         bWasHit;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitLocation
struct UFortMusterExplosiveARProjectile_SetHitLocation_Params
{
public:
	struct FVector                               NewHitLocation;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.OnRep_HitLocation
struct UFortMusterExplosiveARProjectile_OnRep_HitLocation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.UnblockPawnCollision
struct UFortExCaliberProjectile_UnblockPawnCollision_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.TriggerExplosion
struct UFortExCaliberProjectile_TriggerExplosion_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupSwordRevealEffects
struct UFortExCaliberProjectile_SetupSwordRevealEffects_Params
{
public:
	class UStaticMeshComponent*                  ProjectileMesh;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwordRevealAlpha;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorChangeAlpha;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HDRMultiplierAlpha;                                // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41EB[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupProjectileHitAudio
struct UFortExCaliberProjectile_SetupProjectileHitAudio_Params
{
public:
	struct FVector                               ProjectileImpactLocation;                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                HitActor;                                          // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetFuseColorBasedOnTeam
struct UFortExCaliberProjectile_SetFuseColorBasedOnTeam_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.RestartSimulating
struct UFortExCaliberProjectile_RestartSimulating_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.PlayPreExplosionEfffects
struct UFortExCaliberProjectile_PlayPreExplosionEfffects_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnRep_bSimulationRunning
struct UFortExCaliberProjectile_OnRep_bSimulationRunning_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedBuildingDestroyed
struct UFortExCaliberProjectile_OnAttachedBuildingDestroyed_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41EC[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41ED[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedActorDestroyed
struct UFortExCaliberProjectile_OnAttachedActorDestroyed_Params
{
public:
	class UActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MusterCoreWeaponsRuntime.FortExCaliberProjectile.BP_OnProjectileStopped
struct UFortExCaliberProjectile_BP_OnProjectileStopped_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
