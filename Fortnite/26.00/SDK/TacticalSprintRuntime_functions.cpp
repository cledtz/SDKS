#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TacticalSprintRuntime.FortMovementMode_ELTacSprint
// (None)

class UClass* UFortMovementMode_ELTacSprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMovementMode_ELTacSprint");

	return Clss;
}


// FortMovementMode_ELTacSprint TacticalSprintRuntime.Default__FortMovementMode_ELTacSprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMovementMode_ELTacSprint* UFortMovementMode_ELTacSprint::GetDefaultObj()
{
	static class UFortMovementMode_ELTacSprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMovementMode_ELTacSprint*>(UFortMovementMode_ELTacSprint::StaticClass()->DefaultObject);

	return Default;
}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnReloadCanceling
// (Final, Native, Public)
// Parameters:

void UFortMovementMode_ELTacSprint::HandleOnReloadCanceling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleOnReloadCanceling");

	Params::UFortMovementMode_ELTacSprint_HandleOnReloadCanceling_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPawnJump
// (Final, Native, Public)
// Parameters:

void UFortMovementMode_ELTacSprint::HandleOnPawnJump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleOnPawnJump");

	Params::UFortMovementMode_ELTacSprint_HandleOnPawnJump_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnteredEditMode
// (Final, Native, Public)
// Parameters:

void UFortMovementMode_ELTacSprint::HandleOnEnteredEditMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleOnEnteredEditMode");

	Params::UFortMovementMode_ELTacSprint_HandleOnEnteredEditMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnterAircraft
// (Final, Native, Public)
// Parameters:

void UFortMovementMode_ELTacSprint::HandleOnEnterAircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleOnEnterAircraft");

	Params::UFortMovementMode_ELTacSprint_HandleOnEnterAircraft_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnergyDrained
// (Final, Native, Public)
// Parameters:
// class UFortComponent_Energy*       EnergyComp                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMovementMode_ELTacSprint::HandleOnEnergyDrained(class UFortComponent_Energy* EnergyComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleOnEnergyDrained");

	Params::UFortMovementMode_ELTacSprint_HandleOnEnergyDrained_Params Parms{};

	Parms.EnergyComp = EnergyComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleMovementModeChanged
// (Final, Native, Public)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PreviousMovementMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMovementMode_ELTacSprint::HandleMovementModeChanged(class UCharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleMovementModeChanged");

	Params::UFortMovementMode_ELTacSprint_HandleMovementModeChanged_Params Parms{};

	Parms.Character = Character;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleFailedToSprint
// (Final, Native, Public)
// Parameters:

void UFortMovementMode_ELTacSprint::HandleFailedToSprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMovementMode_ELTacSprint", "HandleFailedToSprint");

	Params::UFortMovementMode_ELTacSprint_HandleFailedToSprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
// (None)

class UClass* UFortPlayerControllerComponent_TacticalSprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerControllerComponent_TacticalSprint");

	return Clss;
}


// FortPlayerControllerComponent_TacticalSprint TacticalSprintRuntime.Default__FortPlayerControllerComponent_TacticalSprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerControllerComponent_TacticalSprint* UFortPlayerControllerComponent_TacticalSprint::GetDefaultObj()
{
	static class UFortPlayerControllerComponent_TacticalSprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerControllerComponent_TacticalSprint*>(UFortPlayerControllerComponent_TacticalSprint::StaticClass()->DefaultObject);

	return Default;
}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewIsSprinting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::SetIsSprinting(bool bNewIsSprinting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "SetIsSprinting");

	Params::UFortPlayerControllerComponent_TacticalSprint_SetIsSprinting_Params Parms{};

	Parms.bNewIsSprinting = bNewIsSprinting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RegisterMutatorUpdatedDelegate
// (Final, Native, Private)
// Parameters:

void UFortPlayerControllerComponent_TacticalSprint::RegisterMutatorUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "RegisterMutatorUpdatedDelegate");

	Params::UFortPlayerControllerComponent_TacticalSprint_RegisterMutatorUpdatedDelegate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PreviousWeapon                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::OnWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PreviousWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnWeaponEquipped");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PreviousWeapon = PreviousWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPlayerStatePawnSet
// (Final, Native, Private)
// Parameters:
// class UPlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnPlayerStatePawnSet");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet_Params Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   InPawn                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::OnPawnChanged(class UFortPawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnPawnChanged");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnPawnChanged_Params Parms{};

	Parms.InPawn = InPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMutatorUpdated
// (Final, Native, Private)
// Parameters:

void UFortPlayerControllerComponent_TacticalSprint::OnMutatorUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnMutatorUpdated");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnMutatorUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged
// (Final, Native, Private)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::OnMovementModeChanged(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnMovementModeChanged");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged_Params Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged
// (Final, Native, Private)
// Parameters:
// bool                               bAutoRunIsOn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::OnAutoRunChanged(bool bAutoRunIsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "OnAutoRunChanged");

	Params::UFortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged_Params Parms{};

	Parms.bAutoRunIsOn = bAutoRunIsOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     LoggingSource                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESprintLoggingVerbosityLevelVerbosity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LogString                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerControllerComponent_TacticalSprint::LogAndVisualLog(class UObject* LoggingSource, enum class ESprintLoggingVerbosityLevel Verbosity, class FString& LogString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerControllerComponent_TacticalSprint", "LogAndVisualLog");

	Params::UFortPlayerControllerComponent_TacticalSprint_LogAndVisualLog_Params Parms{};

	Parms.LoggingSource = LoggingSource;
	Parms.Verbosity = Verbosity;
	Parms.LogString = LogString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


