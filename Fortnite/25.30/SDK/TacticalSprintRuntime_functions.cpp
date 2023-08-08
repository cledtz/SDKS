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


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnReloadCanceling
// (Final, Native, Public)
// Parameters:

void UFortMovementMode_ELTacSprint::HandleOnReloadCanceling()
{
	static auto Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleOnReloadCanceling");

	Params::UFortMovementMode_ELTacSprint_HandleOnReloadCanceling_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPawnJump
// (Final, Native, Public)
// Parameters:

void UFortMovementMode_ELTacSprint::HandleOnPawnJump()
{
	static auto Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleOnPawnJump");

	Params::UFortMovementMode_ELTacSprint_HandleOnPawnJump_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnteredEditMode
// (Final, Native, Public)
// Parameters:

void UFortMovementMode_ELTacSprint::HandleOnEnteredEditMode()
{
	static auto Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleOnEnteredEditMode");

	Params::UFortMovementMode_ELTacSprint_HandleOnEnteredEditMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnterAircraft
// (Final, Native, Public)
// Parameters:

void UFortMovementMode_ELTacSprint::HandleOnEnterAircraft()
{
	static auto Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleOnEnterAircraft");

	Params::UFortMovementMode_ELTacSprint_HandleOnEnterAircraft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnergyDrained
// (Final, Native, Public)
// Parameters:
// class UFortComponent_Energy*       EnergyComp                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMovementMode_ELTacSprint::HandleOnEnergyDrained(class UFortComponent_Energy* EnergyComp)
{
	static auto Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleOnEnergyDrained");

	Params::UFortMovementMode_ELTacSprint_HandleOnEnergyDrained_Params Parms;

	Parms.EnergyComp = EnergyComp;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleMovementModeChanged
// (Final, Native, Public)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PreviousMovementMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMovementMode_ELTacSprint::HandleMovementModeChanged(class UCharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleMovementModeChanged");

	Params::UFortMovementMode_ELTacSprint_HandleMovementModeChanged_Params Parms;

	Parms.Character = Character;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleFailedToSprint
// (Final, Native, Public)
// Parameters:

void UFortMovementMode_ELTacSprint::HandleFailedToSprint()
{
	static auto Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleFailedToSprint");

	Params::UFortMovementMode_ELTacSprint_HandleFailedToSprint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewIsSprinting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::SetIsSprinting(bool bNewIsSprinting)
{
	static auto Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "SetIsSprinting");

	Params::UFortPlayerControllerComponent_TacticalSprint_SetIsSprinting_Params Parms;

	Parms.bNewIsSprinting = bNewIsSprinting;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RegisterMutatorUpdatedDelegate
// (Final, Native, Private)
// Parameters:

void UFortPlayerControllerComponent_TacticalSprint::RegisterMutatorUpdatedDelegate()
{
	static auto Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "RegisterMutatorUpdatedDelegate");

	Params::UFortPlayerControllerComponent_TacticalSprint_RegisterMutatorUpdatedDelegate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PreviousWeapon                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::OnWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PreviousWeapon)
{
	static auto Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnWeaponEquipped");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PreviousWeapon = PreviousWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPlayerStatePawnSet
// (Final, Native, Private)
// Parameters:
// class UPlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn)
{
	static auto Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnPlayerStatePawnSet");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet_Params Parms;

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   InPawn                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::OnPawnChanged(class UFortPawn* InPawn)
{
	static auto Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnPawnChanged");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnPawnChanged_Params Parms;

	Parms.InPawn = InPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMutatorUpdated
// (Final, Native, Private)
// Parameters:

void UFortPlayerControllerComponent_TacticalSprint::OnMutatorUpdated()
{
	static auto Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnMutatorUpdated");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnMutatorUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged
// (Final, Native, Private)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::OnMovementModeChanged(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnMovementModeChanged");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged_Params Parms;

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged
// (Final, Native, Private)
// Parameters:
// bool                               bAutoRunIsOn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::OnAutoRunChanged(bool bAutoRunIsOn)
{
	static auto Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnAutoRunChanged");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged_Params Parms;

	Parms.bAutoRunIsOn = bAutoRunIsOn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     LoggingSource                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESprintLoggingVerbosityLevelVerbosity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LogString                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::LogAndVisualLog(class UObject* LoggingSource, enum class ESprintLoggingVerbosityLevel Verbosity, class FString& LogString)
{
	static auto Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "LogAndVisualLog");

	Params::UFortPlayerControllerComponent_TacticalSprint_LogAndVisualLog_Params Parms;

	Parms.LoggingSource = LoggingSource;
	Parms.Verbosity = Verbosity;
	Parms.LogString = LogString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
