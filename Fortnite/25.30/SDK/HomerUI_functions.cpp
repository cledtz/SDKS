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


// Function HomerUI.FortHomerComponent.HandlePawnEmoteStopped
// (Final, Native, Private)
// Parameters:
// class UFortItemDefinition*         MontageItemDef                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PawnEmoting                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHomerComponent::HandlePawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class UFortPawn* PawnEmoting)
{
	static auto Func = Class->GetFunction("FortHomerComponent", "HandlePawnEmoteStopped");

	Params::UFortHomerComponent_HandlePawnEmoteStopped_Params Parms;

	Parms.MontageItemDef = MontageItemDef;
	Parms.PawnEmoting = PawnEmoting;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HomerUI.FortHomerComponent.HandleLocalPlayerEliminatedPlayer
// (Final, Native, Private)
// Parameters:
// class UFortPlayerStateAthena*      Player                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHomerComponent::HandleLocalPlayerEliminatedPlayer(class UFortPlayerStateAthena* Player)
{
	static auto Func = Class->GetFunction("FortHomerComponent", "HandleLocalPlayerEliminatedPlayer");

	Params::UFortHomerComponent_HandleLocalPlayerEliminatedPlayer_Params Parms;

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
