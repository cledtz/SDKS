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


// Function VerseDevices.ScriptDevice.SetEnabled
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bInEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptDevice::SetEnabled(bool bInEnabled)
{
	static auto Func = Class->GetFunction("ScriptDevice", "SetEnabled");

	Params::AScriptDevice_SetEnabled_Params Parms;

	Parms.bInEnabled = bInEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseDevices.ScriptDevice.HandlePreMinigameStartedSetup
// (Final, Native, Public)
// Parameters:

void AScriptDevice::HandlePreMinigameStartedSetup()
{
	static auto Func = Class->GetFunction("ScriptDevice", "HandlePreMinigameStartedSetup");

	Params::AScriptDevice_HandlePreMinigameStartedSetup_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseDevices.ScriptDevice.HandleMinigameEndGame
// (Final, Native, Public)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameEnd        EndMethod                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      NextState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptDevice::HandleMinigameEndGame(class AFortPlayerController* PlayerController, enum class EFortMinigameEnd EndMethod, enum class EFortMinigameState NextState)
{
	static auto Func = Class->GetFunction("ScriptDevice", "HandleMinigameEndGame");

	Params::AScriptDevice_HandleMinigameEndGame_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.EndMethod = EndMethod;
	Parms.NextState = NextState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseDevices.ScriptDevice.BP_SetVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptDevice::BP_SetVisibility(bool bVisible)
{
	static auto Func = Class->GetFunction("ScriptDevice", "BP_SetVisibility");

	Params::AScriptDevice_BP_SetVisibility_Params Parms;

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
