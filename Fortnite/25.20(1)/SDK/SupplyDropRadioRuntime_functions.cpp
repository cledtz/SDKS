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


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.UpdateGroundInfo
// (BlueprintAuthorityOnly, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bValidBlock                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  MovementHitResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UBuildingGameplayActorSupplyDropRadio::UpdateGroundInfo(bool bValidBlock, struct FHitResult& MovementHitResult)
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "UpdateGroundInfo");

	Params::UBuildingGameplayActorSupplyDropRadio_UpdateGroundInfo_Params Parms;

	Parms.bValidBlock = bValidBlock;
	Parms.MovementHitResult = MovementHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetGravityMultiplier
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// float                              InGravityMultiplier                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuildingGameplayActorSupplyDropRadio::SetGravityMultiplier(float InGravityMultiplier)
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "SetGravityMultiplier");

	Params::UBuildingGameplayActorSupplyDropRadio_SetGravityMultiplier_Params Parms;

	Parms.InGravityMultiplier = InGravityMultiplier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetBalloonState
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// enum class ESupplyDropRadioBalloonStateInBalloonState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuildingGameplayActorSupplyDropRadio::SetBalloonState(enum class ESupplyDropRadioBalloonState InBalloonState)
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "SetBalloonState");

	Params::UBuildingGameplayActorSupplyDropRadio_SetBalloonState_Params Parms;

	Parms.InBalloonState = InBalloonState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OpenSupplyDrop
// (BlueprintAuthorityOnly, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuildingGameplayActorSupplyDropRadio::OpenSupplyDrop()
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OpenSupplyDrop");

	Params::UBuildingGameplayActorSupplyDropRadio_OpenSupplyDrop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_DistanceFromOriginalSpawnLocForBalloonOpen
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBuildingGameplayActorSupplyDropRadio::OnRep_DistanceFromOriginalSpawnLocForBalloonOpen()
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OnRep_DistanceFromOriginalSpawnLocForBalloonOpen");

	Params::UBuildingGameplayActorSupplyDropRadio_OnRep_DistanceFromOriginalSpawnLocForBalloonOpen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_BalloonState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBuildingGameplayActorSupplyDropRadio::OnRep_BalloonState()
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OnRep_BalloonState");

	Params::UBuildingGameplayActorSupplyDropRadio_OnRep_BalloonState_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsMoving
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuildingGameplayActorSupplyDropRadio::IsMoving()
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "IsMoving");

	Params::UBuildingGameplayActorSupplyDropRadio_IsMoving_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsGrounded
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuildingGameplayActorSupplyDropRadio::IsGrounded()
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "IsGrounded");

	Params::UBuildingGameplayActorSupplyDropRadio_IsGrounded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.HandleMoveIgnoredActorEndPlay
// (Final, Native, Protected)
// Parameters:
// class UActor*                      EndPlayActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuildingGameplayActorSupplyDropRadio::HandleMoveIgnoredActorEndPlay(class UActor* EndPlayActor, enum class EEndPlayReason Reason)
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "HandleMoveIgnoredActorEndPlay");

	Params::UBuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay_Params Parms;

	Parms.EndPlayActor = EndPlayActor;
	Parms.Reason = Reason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetRootCollisionComponent
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBoxComponent*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBoxComponent* UBuildingGameplayActorSupplyDropRadio::GetRootCollisionComponent()
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetRootCollisionComponent");

	Params::UBuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetHighestAttachParent
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// class UActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UBuildingGameplayActorSupplyDropRadio::GetHighestAttachParent(class UActor* InActor)
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetHighestAttachParent");

	Params::UBuildingGameplayActorSupplyDropRadio_GetHighestAttachParent_Params Parms;

	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetGravityZ
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBuildingGameplayActorSupplyDropRadio::GetGravityZ()
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetGravityZ");

	Params::UBuildingGameplayActorSupplyDropRadio_GetGravityZ_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetBalloonState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESupplyDropRadioBalloonStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESupplyDropRadioBalloonState UBuildingGameplayActorSupplyDropRadio::GetBalloonState()
{
	static auto Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetBalloonState");

	Params::UBuildingGameplayActorSupplyDropRadio_GetBalloonState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent.SetOwningActorNetCullDistance
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                              DistanceSquared                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSupplyDropRadioAttachActorComponent::SetOwningActorNetCullDistance(float DistanceSquared)
{
	static auto Func = Class->GetFunction("FortSupplyDropRadioAttachActorComponent", "SetOwningActorNetCullDistance");

	Params::UFortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance_Params Parms;

	Parms.DistanceSquared = DistanceSquared;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.StopCurrentConversation
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UFortPlayerControllerGameplay*PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSupplyDropRadioBlueprintLibrary::StopCurrentConversation(class UFortPlayerControllerGameplay* PlayerController)
{
	static auto Func = Class->GetFunction("FortSupplyDropRadioBlueprintLibrary", "StopCurrentConversation");

	Params::UFortSupplyDropRadioBlueprintLibrary_StopCurrentConversation_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.SetMoveShouldAbortConversation
// (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UFortPlayerControllerGameplay*PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewMoveAbortConversation                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSupplyDropRadioBlueprintLibrary::SetMoveShouldAbortConversation(class UFortPlayerControllerGameplay* PlayerController, bool bNewMoveAbortConversation)
{
	static auto Func = Class->GetFunction("FortSupplyDropRadioBlueprintLibrary", "SetMoveShouldAbortConversation");

	Params::UFortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.bNewMoveAbortConversation = bNewMoveAbortConversation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
