#pragma once

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
// Function BelongTreaty_FloodRuntime.BelongTreatyProjectile.GetStandingBaseAndConnected
struct UBelongTreatyProjectile_GetStandingBaseAndConnected_Params
{
public:
	float                                        FloorDistanceTolerance;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E3[0x4];                                     // Fixing Size After Last Property
	TArray<class UBuildingSMActor*>              OutNeighboringBuildingActors;                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function BelongTreaty_FloodRuntime.BelongTreatyProjectileMovementComponent.OnRep_ServerSpawnTime
struct UBelongTreatyProjectileMovementComponent_OnRep_ServerSpawnTime_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BelongTreaty_FloodRuntime.BelongTreatyProjectileMovementComponent.AddHitActorsIgnoredWhenMoving
struct UBelongTreatyProjectileMovementComponent_AddHitActorsIgnoredWhenMoving_Params
{
public:
	TArray<struct FHitResult>                    HitsToAdd;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
