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


// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnPlayerSpawned
// (Final, Native, Public)
// Parameters:
// class AFortPlayerController*       PC                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CreativeDebugger::OnPlayerSpawned(class AFortPlayerController* PC)
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
