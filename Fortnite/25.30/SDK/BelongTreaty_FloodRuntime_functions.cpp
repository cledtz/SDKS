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


// Function BelongTreaty_FloodRuntime.BelongTreatyProjectile.GetStandingBaseAndConnected
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              FloorDistanceTolerance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UBuildingSMActor*>    OutNeighboringBuildingActors                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UBelongTreatyProjectile::GetStandingBaseAndConnected(float FloorDistanceTolerance, TArray<class UBuildingSMActor*>* OutNeighboringBuildingActors)
{
	static auto Func = Class->GetFunction("BelongTreatyProjectile", "GetStandingBaseAndConnected");

	Params::UBelongTreatyProjectile_GetStandingBaseAndConnected_Params Parms;

	Parms.FloorDistanceTolerance = FloorDistanceTolerance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutNeighboringBuildingActors != nullptr)
		*OutNeighboringBuildingActors = Parms.OutNeighboringBuildingActors;

}


// Function BelongTreaty_FloodRuntime.BelongTreatyProjectileMovementComponent.OnRep_ServerSpawnTime
// (Final, Native, Private)
// Parameters:

void UBelongTreatyProjectileMovementComponent::OnRep_ServerSpawnTime()
{
	static auto Func = Class->GetFunction("BelongTreatyProjectileMovementComponent", "OnRep_ServerSpawnTime");

	Params::UBelongTreatyProjectileMovementComponent_OnRep_ServerSpawnTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BelongTreaty_FloodRuntime.BelongTreatyProjectileMovementComponent.AddHitActorsIgnoredWhenMoving
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>          HitsToAdd                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UBelongTreatyProjectileMovementComponent::AddHitActorsIgnoredWhenMoving(TArray<struct FHitResult>& HitsToAdd)
{
	static auto Func = Class->GetFunction("BelongTreatyProjectileMovementComponent", "AddHitActorsIgnoredWhenMoving");

	Params::UBelongTreatyProjectileMovementComponent_AddHitActorsIgnoredWhenMoving_Params Parms;

	Parms.HitsToAdd = HitsToAdd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
