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


// Function VKEditUI.VKConnectionIndicator.OnMinigameStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortMinigameState      MinigameState                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      PreviousMinigameState                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKConnectionIndicator::OnMinigameStateChanged(enum class EFortMinigameState MinigameState, enum class EFortMinigameState PreviousMinigameState)
{
	static auto Func = Class->GetFunction("VKConnectionIndicator", "OnMinigameStateChanged");

	Params::UVKConnectionIndicator_OnMinigameStateChanged_Params Parms;

	Parms.MinigameState = MinigameState;
	Parms.PreviousMinigameState = PreviousMinigameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VKEditUI.VKConnectionIndicator.HandleMemorySamplerProgressUpdated
// (Final, Native, Private)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKConnectionIndicator::HandleMemorySamplerProgressUpdated(float Progress)
{
	static auto Func = Class->GetFunction("VKConnectionIndicator", "HandleMemorySamplerProgressUpdated");

	Params::UVKConnectionIndicator_HandleMemorySamplerProgressUpdated_Params Parms;

	Parms.Progress = Progress;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VKEditUI.VKDebugMessagesBase.HandleGameStateInitialized
// (Final, Native, Protected)
// Parameters:
// class UFortGameState*              GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKDebugMessagesBase::HandleGameStateInitialized(class UFortGameState* GameState)
{
	static auto Func = Class->GetFunction("VKDebugMessagesBase", "HandleGameStateInitialized");

	Params::UVKDebugMessagesBase_HandleGameStateInitialized_Params Parms;

	Parms.GameState = GameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VKEditUI.VKDebugMessagesBase.BP_OnGameStateInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortGameState*              GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKDebugMessagesBase::BP_OnGameStateInitialized(class UFortGameState* GameState)
{
	static auto Func = Class->GetFunction("VKDebugMessagesBase", "BP_OnGameStateInitialized");

	Params::UVKDebugMessagesBase_BP_OnGameStateInitialized_Params Parms;

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
