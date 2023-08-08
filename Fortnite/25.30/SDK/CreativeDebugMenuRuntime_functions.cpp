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


// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnPlayerSpawned
// (Final, Native, Public)
// Parameters:
// class UFortPlayerController*       PC                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CreativeDebugger::OnPlayerSpawned(class UFortPlayerController* PC)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CreativeDebugger", "OnPlayerSpawned");

	Params::UFortControllerComponent_CreativeDebugger_OnPlayerSpawned_Params Parms;

	Parms.PC = PC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMutatorUpdated
// (Final, Native, Public)
// Parameters:

void UFortControllerComponent_CreativeDebugger::OnMutatorUpdated()
{
	static auto Func = Class->GetFunction("FortControllerComponent_CreativeDebugger", "OnMutatorUpdated");

	Params::UFortControllerComponent_CreativeDebugger_OnMutatorUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMinigameStateChanged
// (Final, Native, Public)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      MinigameState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CreativeDebugger::OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState)
{
	static auto Func = Class->GetFunction("FortControllerComponent_CreativeDebugger", "OnMinigameStateChanged");

	Params::UFortControllerComponent_CreativeDebugger_OnMinigameStateChanged_Params Parms;

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
