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


// Function CowCatcherModCodeRuntime.CowCatcherBarricadeBase.OnPlacementBlockedByPawnChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bBlockedByPawn                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACowCatcherBarricadeBase::OnPlacementBlockedByPawnChanged(bool bBlockedByPawn)
{
	static auto Func = Class->GetFunction("CowCatcherBarricadeBase", "OnPlacementBlockedByPawnChanged");

	Params::ACowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged_Params Parms;

	Parms.bBlockedByPawn = bBlockedByPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CowCatcherModCodeRuntime.CowCatcherBarricadeBase.BeginCheckingForTouchingPawns
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:

void ACowCatcherBarricadeBase::BeginCheckingForTouchingPawns()
{
	static auto Func = Class->GetFunction("CowCatcherBarricadeBase", "BeginCheckingForTouchingPawns");

	Params::ACowCatcherBarricadeBase_BeginCheckingForTouchingPawns_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
