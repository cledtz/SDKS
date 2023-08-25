#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HomerUI.FortHomerComponent
// (None)

class UClass* UFortHomerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHomerComponent");

	return Clss;
}


// FortHomerComponent HomerUI.Default__FortHomerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHomerComponent* UFortHomerComponent::GetDefaultObj()
{
	static class UFortHomerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHomerComponent*>(UFortHomerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HomerUI.FortHomerComponent.HandlePawnEmoteStopped
// (Final, Native, Private)
// Parameters:
// class UFortItemDefinition*         MontageItemDef                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PawnEmoting                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHomerComponent::HandlePawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class UFortPawn* PawnEmoting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHomerComponent", "HandlePawnEmoteStopped");

	Params::UFortHomerComponent_HandlePawnEmoteStopped_Params Parms{};

	Parms.MontageItemDef = MontageItemDef;
	Parms.PawnEmoting = PawnEmoting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HomerUI.FortHomerComponent.HandleLocalPlayerEliminatedPlayer
// (Final, Native, Private)
// Parameters:
// class UFortPlayerStateAthena*      Player                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHomerComponent::HandleLocalPlayerEliminatedPlayer(class UFortPlayerStateAthena* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHomerComponent", "HandleLocalPlayerEliminatedPlayer");

	Params::UFortHomerComponent_HandleLocalPlayerEliminatedPlayer_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


