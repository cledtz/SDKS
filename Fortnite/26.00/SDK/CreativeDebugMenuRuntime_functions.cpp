#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger
// (None)

class UClass* UFortControllerComponent_CreativeDebugger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_CreativeDebugger");

	return Clss;
}


// FortControllerComponent_CreativeDebugger CreativeDebugMenuRuntime.Default__FortControllerComponent_CreativeDebugger
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_CreativeDebugger* UFortControllerComponent_CreativeDebugger::GetDefaultObj()
{
	static class UFortControllerComponent_CreativeDebugger* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_CreativeDebugger*>(UFortControllerComponent_CreativeDebugger::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnPlayerSpawned
// (Final, Native, Public)
// Parameters:
// class UFortPlayerController*       PC                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CreativeDebugger::OnPlayerSpawned(class UFortPlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CreativeDebugger", "OnPlayerSpawned");

	Params::UFortControllerComponent_CreativeDebugger_OnPlayerSpawned_Params Parms{};

	Parms.PC = PC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMutatorUpdated
// (Final, Native, Public)
// Parameters:

void UFortControllerComponent_CreativeDebugger::OnMutatorUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CreativeDebugger", "OnMutatorUpdated");

	Params::UFortControllerComponent_CreativeDebugger_OnMutatorUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMinigameStateChanged
// (Final, Native, Public)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      MinigameState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CreativeDebugger::OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CreativeDebugger", "OnMinigameStateChanged");

	Params::UFortControllerComponent_CreativeDebugger_OnMinigameStateChanged_Params Parms{};

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


