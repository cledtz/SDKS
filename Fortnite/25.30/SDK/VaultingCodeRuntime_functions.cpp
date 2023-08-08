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


// Function VaultingCodeRuntime.HurdleComponent.UnregisterMutatorUpdatedDelegate
// (Final, Native, Protected)
// Parameters:

void UHurdleComponent::UnregisterMutatorUpdatedDelegate()
{
	static auto Func = Class->GetFunction("HurdleComponent", "UnregisterMutatorUpdatedDelegate");

	Params::UHurdleComponent_UnregisterMutatorUpdatedDelegate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VaultingCodeRuntime.HurdleComponent.ShouldShowHurdleIndicator
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHurdleComponent::ShouldShowHurdleIndicator()
{
	static auto Func = Class->GetFunction("HurdleComponent", "ShouldShowHurdleIndicator");

	Params::UHurdleComponent_ShouldShowHurdleIndicator_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VaultingCodeRuntime.HurdleComponent.ServerStartHurdle
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FReplicatedHurdleTargetingDataInReplicatedTargetingData                                        (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             ClientLastTeleportTime                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::ServerStartHurdle(const struct FReplicatedHurdleTargetingData& InReplicatedTargetingData, double ClientLastTeleportTime)
{
	static auto Func = Class->GetFunction("HurdleComponent", "ServerStartHurdle");

	Params::UHurdleComponent_ServerStartHurdle_Params Parms;

	Parms.InReplicatedTargetingData = InReplicatedTargetingData;
	Parms.ClientLastTeleportTime = ClientLastTeleportTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VaultingCodeRuntime.HurdleComponent.RegisterMutatorUpdatedDelegate
// (Final, Native, Protected)
// Parameters:
// class UPawn*                       AffectedPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::RegisterMutatorUpdatedDelegate(class UPawn* AffectedPawn)
{
	static auto Func = Class->GetFunction("HurdleComponent", "RegisterMutatorUpdatedDelegate");

	Params::UHurdleComponent_RegisterMutatorUpdatedDelegate_Params Parms;

	Parms.AffectedPawn = AffectedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VaultingCodeRuntime.HurdleComponent.OnRep_ReplicatedLastTeleportTime
// (Final, Native, Protected)
// Parameters:

void UHurdleComponent::OnRep_ReplicatedLastTeleportTime()
{
	static auto Func = Class->GetFunction("HurdleComponent", "OnRep_ReplicatedLastTeleportTime");

	Params::UHurdleComponent_OnRep_ReplicatedLastTeleportTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VaultingCodeRuntime.HurdleComponent.OnRep_ReplicatedHurdleState
// (Final, Native, Protected)
// Parameters:

void UHurdleComponent::OnRep_ReplicatedHurdleState()
{
	static auto Func = Class->GetFunction("HurdleComponent", "OnRep_ReplicatedHurdleState");

	Params::UHurdleComponent_OnRep_ReplicatedHurdleState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VaultingCodeRuntime.HurdleComponent.OnPlayerStatePawnSet
// (Final, Native, Protected)
// Parameters:
// class UPlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn)
{
	static auto Func = Class->GetFunction("HurdleComponent", "OnPlayerStatePawnSet");

	Params::UHurdleComponent_OnPlayerStatePawnSet_Params Parms;

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VaultingCodeRuntime.HurdleComponent.OnMutatorUpdated
// (Final, Native, Protected)
// Parameters:

void UHurdleComponent::OnMutatorUpdated()
{
	static auto Func = Class->GetFunction("HurdleComponent", "OnMutatorUpdated");

	Params::UHurdleComponent_OnMutatorUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VaultingCodeRuntime.HurdleComponent.IsContextualActionPrototypeActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHurdleComponent::IsContextualActionPrototypeActive()
{
	static auto Func = Class->GetFunction("HurdleComponent", "IsContextualActionPrototypeActive");

	Params::UHurdleComponent_IsContextualActionPrototypeActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VaultingCodeRuntime.HurdleComponent.HandleTargetingDataValid
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHurdleTargetingData        TargetingData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UHurdleComponent::HandleTargetingDataValid(struct FHurdleTargetingData& TargetingData)
{
	static auto Func = Class->GetFunction("HurdleComponent", "HandleTargetingDataValid");

	Params::UHurdleComponent_HandleTargetingDataValid_Params Parms;

	Parms.TargetingData = TargetingData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultingCodeRuntime.HurdleComponent.HandleTargetingDataInvalid
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHurdleComponent::HandleTargetingDataInvalid()
{
	static auto Func = Class->GetFunction("HurdleComponent", "HandleTargetingDataInvalid");

	Params::UHurdleComponent_HandleTargetingDataInvalid_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultingCodeRuntime.HurdleComponent.HandleOwnerTeleported
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   TeleportedOwner                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::HandleOwnerTeleported(class UFortPawn* TeleportedOwner)
{
	static auto Func = Class->GetFunction("HurdleComponent", "HandleOwnerTeleported");

	Params::UHurdleComponent_HandleOwnerTeleported_Params Parms;

	Parms.TeleportedOwner = TeleportedOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VaultingCodeRuntime.HurdleComponent.HandleOwnerMovementModeChanged
// (Final, Native, Protected)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PreviousMovementMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::HandleOwnerMovementModeChanged(class UCharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("HurdleComponent", "HandleOwnerMovementModeChanged");

	Params::UHurdleComponent_HandleOwnerMovementModeChanged_Params Parms;

	Parms.Character = Character;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VaultingCodeRuntime.HurdleComponent.HandleOwnerJumpInput
// (Final, Native, Protected)
// Parameters:
// bool                               bPressed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::HandleOwnerJumpInput(bool bPressed)
{
	static auto Func = Class->GetFunction("HurdleComponent", "HandleOwnerJumpInput");

	Params::UHurdleComponent_HandleOwnerJumpInput_Params Parms;

	Parms.bPressed = bPressed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VaultingCodeRuntime.HurdleComponent.BP_HandleSpringJump
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHurdleComponent::BP_HandleSpringJump()
{
	static auto Func = Class->GetFunction("HurdleComponent", "BP_HandleSpringJump");

	Params::UHurdleComponent_BP_HandleSpringJump_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultingCodeRuntime.HurdleComponent.BP_HandleHurdleStarted
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHurdleTargetingData        TargetingData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FSynchedActionInfo          SynchedActionInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UHurdleComponent::BP_HandleHurdleStarted(struct FHurdleTargetingData& TargetingData, struct FSynchedActionInfo& SynchedActionInfo)
{
	static auto Func = Class->GetFunction("HurdleComponent", "BP_HandleHurdleStarted");

	Params::UHurdleComponent_BP_HandleHurdleStarted_Params Parms;

	Parms.TargetingData = TargetingData;
	Parms.SynchedActionInfo = SynchedActionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultingCodeRuntime.HurdleComponent.BP_HandleHurdleEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHurdleComponent::BP_HandleHurdleEnded()
{
	static auto Func = Class->GetFunction("HurdleComponent", "BP_HandleHurdleEnded");

	Params::UHurdleComponent_BP_HandleHurdleEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultingCodeRuntime.HurdleComponent.BP_CanStartHurdle
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// bool                               OutCanStartHurdle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::BP_CanStartHurdle(bool* OutCanStartHurdle)
{
	static auto Func = Class->GetFunction("HurdleComponent", "BP_CanStartHurdle");

	Params::UHurdleComponent_BP_CanStartHurdle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (OutCanStartHurdle != nullptr)
		*OutCanStartHurdle = Parms.OutCanStartHurdle;

}


// Function VaultingCodeRuntime.HurdleLibrary.PerformHurdleTargeting
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UCharacter*                  Character                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHurdleInputConfigCache     HurdleInputConfig                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FHurdleTargetingData        OutTargetingData                                                 (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bIsAutoHurdle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHurdleLibrary::PerformHurdleTargeting(class UCharacter* Character, struct FHurdleInputConfigCache* HurdleInputConfig, struct FHurdleTargetingData* OutTargetingData, bool bIsAutoHurdle)
{
	static auto Func = Class->GetFunction("HurdleLibrary", "PerformHurdleTargeting");

	Params::UHurdleLibrary_PerformHurdleTargeting_Params Parms;

	Parms.Character = Character;
	Parms.bIsAutoHurdle = bIsAutoHurdle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (HurdleInputConfig != nullptr)
		*HurdleInputConfig = Parms.HurdleInputConfig;

	if (OutTargetingData != nullptr)
		*OutTargetingData = Parms.OutTargetingData;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
