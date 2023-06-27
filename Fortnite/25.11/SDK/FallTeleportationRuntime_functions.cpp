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


// Function FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleWarmupCountdownEndTimeUpdated
// (Final, Native, Protected)
// Parameters:
// float                              NewEndTime                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortFallTeleportSpawnerComponent::HandleWarmupCountdownEndTimeUpdated(float NewEndTime)
{
	static auto Func = Class->GetFunction("FortFallTeleportSpawnerComponent", "HandleWarmupCountdownEndTimeUpdated");

	Params::UFortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated_Params Parms;

	Parms.NewEndTime = NewEndTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleGamePhaseChanged
// (Final, Native, Protected)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortFallTeleportSpawnerComponent::HandleGamePhaseChanged(enum class EAthenaGamePhase GamePhase)
{
	static auto Func = Class->GetFunction("FortFallTeleportSpawnerComponent", "HandleGamePhaseChanged");

	Params::UFortFallTeleportSpawnerComponent_HandleGamePhaseChanged_Params Parms;

	Parms.GamePhase = GamePhase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FallTeleportationRuntime.FortFallTeleportCheatManager.EnableFallTeleportationIndefinitely
// (Final, Exec, Native, Private)
// Parameters:

void UFortFallTeleportCheatManager::EnableFallTeleportationIndefinitely()
{
	static auto Func = Class->GetFunction("FortFallTeleportCheatManager", "EnableFallTeleportationIndefinitely");

	Params::UFortFallTeleportCheatManager_EnableFallTeleportationIndefinitely_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FallTeleportationRuntime.FortFallTeleportComponentBase.UpdateLastGroundLocation
// (Final, Native, Protected)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortFallTeleportComponentBase::UpdateLastGroundLocation(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("FortFallTeleportComponentBase", "UpdateLastGroundLocation");

	Params::UFortFallTeleportComponentBase_UpdateLastGroundLocation_Params Parms;

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FallTeleportationRuntime.FortFallTeleportComponentBase.IsValidActorToTeleportOn
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ActorToTeleportOn                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortFallTeleportComponentBase::IsValidActorToTeleportOn(class AActor* ActorToTeleportOn)
{
	static auto Func = Class->GetFunction("FortFallTeleportComponentBase", "IsValidActorToTeleportOn");

	Params::UFortFallTeleportComponentBase_IsValidActorToTeleportOn_Params Parms;

	Parms.ActorToTeleportOn = ActorToTeleportOn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FallTeleportationRuntime.FortFallTeleportComponentBase.IsTeleportLocationValid
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     LocationToTest                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortFallTeleportComponentBase::IsTeleportLocationValid(struct FVector& LocationToTest)
{
	static auto Func = Class->GetFunction("FortFallTeleportComponentBase", "IsTeleportLocationValid");

	Params::UFortFallTeleportComponentBase_IsTeleportLocationValid_Params Parms;

	Parms.LocationToTest = LocationToTest;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
