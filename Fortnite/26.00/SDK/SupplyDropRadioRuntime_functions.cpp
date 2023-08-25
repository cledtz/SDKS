#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
// (Actor)

class UClass* UBuildingGameplayActorSupplyDropRadio::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuildingGameplayActorSupplyDropRadio");

	return Clss;
}


// BuildingGameplayActorSupplyDropRadio SupplyDropRadioRuntime.Default__BuildingGameplayActorSupplyDropRadio
// (Public, ClassDefaultObject, ArchetypeObject)

class UBuildingGameplayActorSupplyDropRadio* UBuildingGameplayActorSupplyDropRadio::GetDefaultObj()
{
	static class UBuildingGameplayActorSupplyDropRadio* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuildingGameplayActorSupplyDropRadio*>(UBuildingGameplayActorSupplyDropRadio::StaticClass()->DefaultObject);

	return Default;
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.UpdateGroundInfo
// (BlueprintAuthorityOnly, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bValidBlock                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  MovementHitResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UBuildingGameplayActorSupplyDropRadio::UpdateGroundInfo(bool bValidBlock, struct FHitResult& MovementHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "UpdateGroundInfo");

	Params::UBuildingGameplayActorSupplyDropRadio_UpdateGroundInfo_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "SetGravityMultiplier");

	Params::UBuildingGameplayActorSupplyDropRadio_SetGravityMultiplier_Params Parms{};

	Parms.InGravityMultiplier = InGravityMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetBalloonState
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// enum class ESupplyDropRadioBalloonStateInBalloonState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuildingGameplayActorSupplyDropRadio::SetBalloonState(enum class ESupplyDropRadioBalloonState InBalloonState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "SetBalloonState");

	Params::UBuildingGameplayActorSupplyDropRadio_SetBalloonState_Params Parms{};

	Parms.InBalloonState = InBalloonState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OpenSupplyDrop
// (BlueprintAuthorityOnly, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuildingGameplayActorSupplyDropRadio::OpenSupplyDrop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OpenSupplyDrop");

	Params::UBuildingGameplayActorSupplyDropRadio_OpenSupplyDrop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_DistanceFromOriginalSpawnLocForBalloonOpen
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBuildingGameplayActorSupplyDropRadio::OnRep_DistanceFromOriginalSpawnLocForBalloonOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OnRep_DistanceFromOriginalSpawnLocForBalloonOpen");

	Params::UBuildingGameplayActorSupplyDropRadio_OnRep_DistanceFromOriginalSpawnLocForBalloonOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_BalloonState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBuildingGameplayActorSupplyDropRadio::OnRep_BalloonState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OnRep_BalloonState");

	Params::UBuildingGameplayActorSupplyDropRadio_OnRep_BalloonState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsMoving
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuildingGameplayActorSupplyDropRadio::IsMoving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "IsMoving");

	Params::UBuildingGameplayActorSupplyDropRadio_IsMoving_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsGrounded
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuildingGameplayActorSupplyDropRadio::IsGrounded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "IsGrounded");

	Params::UBuildingGameplayActorSupplyDropRadio_IsGrounded_Params Parms{};


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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "HandleMoveIgnoredActorEndPlay");

	Params::UBuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay_Params Parms{};

	Parms.EndPlayActor = EndPlayActor;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetRootCollisionComponent
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBoxComponent*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBoxComponent* UBuildingGameplayActorSupplyDropRadio::GetRootCollisionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetRootCollisionComponent");

	Params::UBuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent_Params Parms{};


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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetHighestAttachParent");

	Params::UBuildingGameplayActorSupplyDropRadio_GetHighestAttachParent_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetGravityZ
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBuildingGameplayActorSupplyDropRadio::GetGravityZ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetGravityZ");

	Params::UBuildingGameplayActorSupplyDropRadio_GetGravityZ_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetBalloonState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESupplyDropRadioBalloonStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESupplyDropRadioBalloonState UBuildingGameplayActorSupplyDropRadio::GetBalloonState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetBalloonState");

	Params::UBuildingGameplayActorSupplyDropRadio_GetBalloonState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent
// (None)

class UClass* UFortSupplyDropRadioAttachActorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSupplyDropRadioAttachActorComponent");

	return Clss;
}


// FortSupplyDropRadioAttachActorComponent SupplyDropRadioRuntime.Default__FortSupplyDropRadioAttachActorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSupplyDropRadioAttachActorComponent* UFortSupplyDropRadioAttachActorComponent::GetDefaultObj()
{
	static class UFortSupplyDropRadioAttachActorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSupplyDropRadioAttachActorComponent*>(UFortSupplyDropRadioAttachActorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent.SetOwningActorNetCullDistance
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                              DistanceSquared                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSupplyDropRadioAttachActorComponent::SetOwningActorNetCullDistance(float DistanceSquared)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSupplyDropRadioAttachActorComponent", "SetOwningActorNetCullDistance");

	Params::UFortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance_Params Parms{};

	Parms.DistanceSquared = DistanceSquared;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary
// (None)

class UClass* UFortSupplyDropRadioBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSupplyDropRadioBlueprintLibrary");

	return Clss;
}


// FortSupplyDropRadioBlueprintLibrary SupplyDropRadioRuntime.Default__FortSupplyDropRadioBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSupplyDropRadioBlueprintLibrary* UFortSupplyDropRadioBlueprintLibrary::GetDefaultObj()
{
	static class UFortSupplyDropRadioBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSupplyDropRadioBlueprintLibrary*>(UFortSupplyDropRadioBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.StopCurrentConversation
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UFortPlayerControllerGameplay*PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSupplyDropRadioBlueprintLibrary::StopCurrentConversation(class UFortPlayerControllerGameplay* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSupplyDropRadioBlueprintLibrary", "StopCurrentConversation");

	Params::UFortSupplyDropRadioBlueprintLibrary_StopCurrentConversation_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.SetMoveShouldAbortConversation
// (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UFortPlayerControllerGameplay*PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewMoveAbortConversation                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSupplyDropRadioBlueprintLibrary::SetMoveShouldAbortConversation(class UFortPlayerControllerGameplay* PlayerController, bool bNewMoveAbortConversation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSupplyDropRadioBlueprintLibrary", "SetMoveShouldAbortConversation");

	Params::UFortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bNewMoveAbortConversation = bNewMoveAbortConversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


